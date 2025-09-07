const express = require('express');
const cors = require('cors');
const fetch = require('node-fetch');

const app = express();
const port = process.env.PORT || 3000;

// Use an environment variable for the GitHub token
const GITHUB_TOKEN = process.env.GITHUB_TOKEN;
const REPO_OWNER = 'notamitgamer';
const REPO_NAME = 'bsc';
const GITHUB_API_URL = `https://api.github.com/repos/${REPO_OWNER}/${REPO_NAME}`;
const GITHUB_RAW_URL = `https://raw.githubusercontent.com/${REPO_OWNER}/${REPO_NAME}/main`;

app.use(cors());

// A helper function to fetch data from GitHub with authentication
async function fetchGitHub(url) {
    const response = await fetch(url, {
        headers: {
            'Authorization': GITHUB_TOKEN ? `token ${GITHUB_TOKEN}` : undefined,
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

// NEW API endpoint to fetch data from the "tution-c" folder
app.get('/api/tution-c', async (req, res) => {
    try {
        const folder = 'tution-c';
        const result = await fetchGitHub(`${GITHUB_API_URL}/contents/${folder}`);

        if (!result.ok) {
            return res.status(result.status).json({ error: 'Failed to fetch folder contents.' });
        }

        const allFiles = await result.json();

        res.json({
            cFiles: allFiles.filter(f => f.name.endsWith('.c')),
        });

    } catch (error) {
        console.error('Error in API endpoint:', error);
        res.status(500).json({ error: 'Failed to fetch data from GitHub.', details: error.message });
    }
});

// New endpoint to fetch raw file content
app.get('/api/raw', async (req, res) => {
    const { fileName, folder } = req.query;
    if (!fileName || !folder) {
        return res.status(400).json({ error: 'fileName and folder are required query parameters.' });
    }

    try {
        const fileUrl = `${GITHUB_RAW_URL}/${folder}/${fileName}`;
        const response = await fetch(fileUrl);
        
        if (!response.ok) {
            throw new Error(`Failed to fetch raw file: ${response.statusText}`);
        }

        const code = await response.text();
        res.set('Content-Type', 'text/plain');
        res.send(code);

    } catch (error) {
        console.error('Error fetching raw content:', error);
        res.status(500).json({ error: 'Failed to fetch raw content.' });
    }
});

app.listen(port, () => {
    console.log(`Server listening at http://localhost:${port}`);
});
