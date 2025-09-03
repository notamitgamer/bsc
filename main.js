const projectCardsContainer = document.getElementById('project-cards');
const codeModal = document.getElementById('code-modal');
const closeModalBtn = document.getElementById('close-modal');
const modalTitle = document.getElementById('modal-title');
const codeBlock = document.getElementById('code-block');
const codeContent = document.getElementById('code-content');
const snapshotImage = document.getElementById('snapshot-image');
const githubLink = document.getElementById('github-link');
const loadingMessage = document.getElementById('loading-message');

// Point the API request to your new backend server
// IMPORTANT: Replace this with your Render deployment URL after deployment.
const API_URL = 'http://localhost:3000/api/programs';
const REPO_OWNER = 'notamitgamer';
const REPO_NAME = 'bsc';
const GITHUB_RAW_URL = `https://raw.githubusercontent.com/${REPO_OWNER}/${REPO_NAME}/main`;

// Function to sanitize a filename for display
function sanitizeFilename(filename) {
    return filename.replace(/\.c$/, '').replace(/\.(png|jpe?g|gif)$/i, '').replace(/[-_]/g, ' ').replace(/\b\w/g, c => c.toUpperCase());
}

// Fetch and display code in the modal
async function fetchAndDisplayCode(filePath, fileName) {
    try {
        const response = await fetch(`${GITHUB_RAW_URL}/${filePath}`);
        if (!response.ok) {
            throw new Error(`GitHub raw content API responded with status ${response.status}`);
        }
        const code = await response.text();
        modalTitle.textContent = sanitizeFilename(fileName);
        codeContent.textContent = code;
        githubLink.href = `https://github.com/${REPO_OWNER}/${REPO_NAME}/blob/main/${filePath}`;
        
        // Toggle display
        codeBlock.classList.remove('hidden');
        snapshotImage.classList.add('hidden');
        githubLink.classList.remove('hidden');
        codeModal.style.display = 'flex';
    } catch (error) {
        console.error("Failed to fetch code:", error);
        codeContent.textContent = "Error loading code. Please try again later.";
        githubLink.classList.add('hidden');
    }
}

// Fetch and display snapshot in the modal
async function fetchAndDisplaySnapshot(filePath, fileName) {
    try {
        const response = await fetch(`${GITHUB_RAW_URL}/${filePath}`);
        if (!response.ok) {
            throw new Error(`GitHub raw content API responded with status ${response.status}`);
        }
        const imageUrl = await response.url;
        modalTitle.textContent = sanitizeFilename(fileName);
        snapshotImage.src = imageUrl;
        githubLink.href = `https://github.com/${REPO_OWNER}/${REPO_NAME}/blob/main/${filePath}`;

        // Toggle display
        codeBlock.classList.add('hidden');
        snapshotImage.classList.remove('hidden');
        githubLink.classList.remove('hidden');
        codeModal.style.display = 'flex';
    } catch (error) {
        console.error("Failed to fetch snapshot:", error);
        snapshotImage.src = '';
        snapshotImage.alt = 'Error loading image.';
        githubLink.classList.add('hidden');
    }
}

// Fetch C programs and render project cards from the backend
async function fetchPrograms() {
    loadingMessage.style.display = 'block';
    projectCardsContainer.innerHTML = '';
    try {
        const response = await fetch(API_URL);
        if (!response.ok) {
            throw new Error('Failed to fetch from backend server.');
        }
        const data = await response.json();

        const cFiles = data.cFiles;
        const snapshotMap = new Map(data.snapshots.map(file => [file.name, file.path]));
        const codeAssetsMap = new Map(data.codeAssets.map(asset => [asset.name, asset.url]));
        const exeAssetsMap = new Map(data.exeAssets.map(asset => [asset.name, asset.url]));

        loadingMessage.style.display = 'none';
        
        if (cFiles.length === 0) {
            projectCardsContainer.innerHTML = '<p class="col-span-full text-center text-slate-500">No programs found.</p>';
            return;
        }

        cFiles.forEach(file => {
            const card = document.createElement('div');
            card.className = 'bg-white rounded-lg p-6 shadow-lg flex flex-col justify-between transition-transform duration-300 hover:scale-105';

            const exeFileName = file.name.replace('.c', '.exe');
            const codeDownloadUrl = codeAssetsMap.get(file.name);
            const exeDownloadUrl = exeAssetsMap.get(exeFileName);
            const snapshotPath = snapshotMap.get(file.name.replace('.c', '.png') || file.name.replace('.c', '.jpg') || file.name.replace('.c', '.jpeg'));
            
            card.innerHTML = `
                <div>
                    <h3 class="text-xl font-bold text-cyan-600 mb-2">${sanitizeFilename(file.name)}</h3>
                    <p class="text-sm text-slate-700 mb-4">A practice program from the syllabus.</p>
                </div>
                <div class="flex flex-col sm:flex-row gap-2 mt-auto">
                    <button class="view-code-btn flex-1 px-4 py-2 bg-blue-600 hover:bg-blue-700 text-white font-medium rounded-md transition-colors shadow-md" data-path="${file.path}" data-name="${file.name}">
                        View Code
                    </button>
                    ${snapshotPath ? `
                        <button class="view-snapshot-btn flex-1 px-4 py-2 bg-purple-600 hover:bg-purple-700 text-white font-medium rounded-md transition-colors shadow-md" data-path="${snapshotPath}" data-name="${file.name}">
                            View Snapshot
                        </button>` : ''}
                    ${codeDownloadUrl ? `
                        <a href="${codeDownloadUrl}" class="flex-1 px-4 py-2 bg-blue-500 hover:bg-blue-600 text-white text-center font-medium rounded-md transition-colors shadow-md" download>
                            Download Code
                        </a>` : ''}
                    ${exeDownloadUrl ? `
                        <a href="${exeDownloadUrl}" class="flex-1 px-4 py-2 bg-green-600 hover:bg-green-700 text-white text-center font-medium rounded-md transition-colors shadow-md" download>
                            Download EXE
                        </a>` : ''}
                </div>
            `;
            projectCardsContainer.appendChild(card);
        });

        // Attach click listeners to the "View Code" and "View Snapshot" buttons
        document.querySelectorAll('.view-code-btn').forEach(button => {
            button.addEventListener('click', (e) => {
                const filePath = e.currentTarget.getAttribute('data-path');
                const fileName = e.currentTarget.getAttribute('data-name');
                fetchAndDisplayCode(filePath, fileName);
            });
        });
        
        document.querySelectorAll('.view-snapshot-btn').forEach(button => {
            button.addEventListener('click', (e) => {
                const filePath = e.currentTarget.getAttribute('data-path');
                const fileName = e.currentTarget.getAttribute('data-name');
                fetchAndDisplaySnapshot(filePath, fileName);
            });
        });

    } catch (error) {
        console.error("Error fetching programs:", error);
        loadingMessage.textContent = 'Failed to load programs. Please check the repository and your backend server.';
    }
}

// Event listener for closing the modal
closeModalBtn.addEventListener('click', () => {
    codeModal.style.display = 'none';
});

// Close modal when clicking outside of it
window.addEventListener('click', (event) => {
    if (event.target === codeModal) {
        codeModal.style.display = 'none';
    }
});

// Initial calls to fetch data on page load
fetchPrograms();
