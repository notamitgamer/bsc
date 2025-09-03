const express = require('express');
const cors = require('cors');

const app = express();
const port = process.env.PORT || 3000;

// IMPORTANT: This token is placed here for demonstration.
// For production, you should use environment variables.
Github_API = os.getenv("github")
const GITHUB_TOKEN = 'github';
const REPO_OWNER = 'notamitgamer';
const REPO_NAME = 'bsc';
const GITHUB_API_URL = `https://api.github.com/repos/${REPO_OWNER}/${REPO_NAME}`;

app.use(cors());

// A helper function to fetch data from GitHub with authentication
async function fetchGitHub(url) {
    const response = await fetch(url, {
        headers: {
            'Authorization': `token ${GITHUB_TOKEN}`,
            'Accept': 'application/vnd.github.v3+json'
        }
    });

    if (response.status === 403) {
        console.warn('GitHub API rate limit exceeded.');
        return { ok: false, status: 403 };
    }
    return response;
}

// Main API endpoint to fetch all program data
app.get('/api/programs', async (req, res) => {
    try {
        const [
            cFolderResult,
            snapshotFolderResult,
            codeAssetsResult,
            exeAssetsResult
        ] = await Promise.allSettled([
            fetchGitHub(`${GITHUB_API_URL}/contents/c`),
            fetchGitHub(`${GITHUB_API_URL}/contents/c/snapshot`),
            fetchGitHub(`${GITHUB_API_URL}/releases/tags/bsc-c-code`),
            fetchGitHub(`${GITHUB_API_URL}/releases/tags/bsc-c-exe`)
        ]);

        const allCFolderFiles = cFolderResult.status === 'fulfilled' && cFolderResult.value.ok ? await cFolderResult.value.json() : [];
        const snapshotFiles = snapshotFolderResult.status === 'fulfilled' && snapshotFolderResult.value.ok ? await snapshotFolderResult.value.json() : [];
        const codeAssets = codeAssetsResult.status === 'fulfilled' && codeAssetsResult.value.ok ? await codeAssetsResult.value.json() : { assets: [] };
        const exeAssets = exeAssetsResult.status === 'fulfilled' && exeAssetsResult.value.ok ? await exeAssetsResult.value.json() : { assets: [] };

        res.json({
            cFiles: allCFolderFiles.filter(f => f.name.endsWith('.c')),
            snapshots: snapshotFiles.filter(f => f.type === 'file' && f.name.match(/\.(png|jpe?g|gif)$/i)),
            codeAssets: codeAssets.assets.map(asset => ({ name: asset.name, url: asset.browser_download_url })),
            exeAssets: exeAssets.assets.map(asset => ({ name: asset.name, url: asset.browser_download_url }))
        });

    } catch (error) {
        console.error('Error in API endpoint:', error);
        res.status(500).json({ error: 'Failed to fetch data from GitHub.', details: error.message });
    }
});

app.listen(port, () => {
    console.log(`Server listening at http://localhost:${port}`);
});
