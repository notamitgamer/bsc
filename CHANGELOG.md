# Changelog

> Last build: August 30, 2026 at 02:22 UTC

## Latest Build

- **Build ID** — `4e9f9c8e8998cd9472bb27f84fcdae37c12883cc`
- **Triggered by** — [@notamitgamer](https://github.com/notamitgamer)
- **Branch** — `main`
- **Build time** — August 30, 2026 at 02:22 UTC

## Recent Commits

### [`4e9f9c8`](https://github.com/notamitgamer/bsc/commit/4e9f9c8e8998cd9472bb27f84fcdae37c12883cc) Merge pull request #114 from notamitgamer/revert/pr-110-through-latest

**Amit Dutta** committed on Aug 30, 2026 02:22 UTC


---

### [`c6a1ff1`](https://github.com/notamitgamer/bsc/commit/c6a1ff1339a63cb3be854735c9cdc59e63d2422c) Revert offline-snapshots feature (PR #110, #112) and clean up stray build artifacts

**bot-for-notamitgamer[bot]** committed on Aug 30, 2026 02:20 UTC · +1 / -26492 lines · 17 files changed

<details>
<summary>Show 17 changed files</summary>

| File | Change | Lines |
| --- | --- | --- |
| `.vitepress/cache/deps/_metadata.json` | Removed | -31 |
| `.vitepress/cache/deps/chunk-LRIOPKVT.js` | Removed | -13080 |
| `.vitepress/cache/deps/chunk-LRIOPKVT.js.map` | Removed | -7 |
| `.vitepress/cache/deps/package.json` | Removed | -3 |
| `.vitepress/cache/deps/vitepress___@vue_devtools-api.js` | Removed | -3813 |
| `.vitepress/cache/deps/vitepress___@vue_devtools-api.js.map` | Removed | -7 |
| `.vitepress/cache/deps/vitepress___@vueuse_core.js` | Removed | -8800 |
| `.vitepress/cache/deps/vitepress___@vueuse_core.js.map` | Removed | -7 |
| `.vitepress/cache/deps/vue.js` | Removed | -346 |
| `.vitepress/cache/deps/vue.js.map` | Removed | -7 |
| `apk-manifest/manifest.json` | Removed | -6 |
| `docs/.vitepress/config.mts` | Modified | +1 -2 |
| `docs/.vitepress/theme/components/SnapshotManager.vue` | Removed | -191 |
| `docs/.vitepress/theme/index.ts` | Modified | -7 |
| `docs/.vitepress/theme/lib/snapshotDb.ts` | Removed | -60 |
| `docs/public/sw-snapshot.js` | Removed | -114 |
| `docs/snapshots.md` | Removed | -11 |
</details>


---

### [`cf6fd5b`](https://github.com/notamitgamer/bsc/commit/cf6fd5bcd3e14772a19346162e2aa62049b9e6b0) Refactor snapshot manager to include file handling

**Amit Dutta** committed on Aug 29, 2026 13:49 UTC · +16 / -152 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `docs/.vitepress/theme/components/SnapshotManager.vue` | Modified | +16 -152 |
</details>


---

### [`36ac1f5`](https://github.com/notamitgamer/bsc/commit/36ac1f57f697329d357b10345db342d86e2ebfb8) chore: update changelog [skip ci]

**bot-for-notamitgamer[bot]** committed on Aug 29, 2026 07:29 UTC · +48 / -40 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `CHANGELOG.md` | Modified | +48 -40 |
</details>


---

### [`a96e61a`](https://github.com/notamitgamer/bsc/commit/a96e61aaac2402b13a137ae15cb2c7b04695aefe) Merge pull request #112 from notamitgamer/feature/snapshot-progress-ui

**Amit Dutta** committed on Aug 29, 2026 07:28 UTC


---

### [`1f8dae2`](https://github.com/notamitgamer/bsc/commit/1f8dae28aa3d65d073a9e3a925dbd0f87f5558db) Speed up snapshot capture + turn button into a progress bar

**notamitgamer2** committed on Aug 29, 2026 07:26 UTC · +105 / -19 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `docs/.vitepress/theme/components/SnapshotManager.vue` | Modified | +105 -19 |
</details>


---

### [`2eb188a`](https://github.com/notamitgamer/bsc/commit/2eb188a6a4faaeff12bf183b48ae5c68a170a10f) chore(deps): bump actions/setup-node from 4 to 7 [skip ci]

**dependabot[bot]** committed on Aug 29, 2026 07:18 UTC · +1 / -1 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `.github/workflows/build-apk.yml` | Modified | +1 -1 |
</details>


---

### [`7f4f47e`](https://github.com/notamitgamer/bsc/commit/7f4f47ec286eebadee60bf269c589b7b873b23ed) chore(deps): bump actions/setup-python from 5 to 7 [skip ci]

**dependabot[bot]** committed on Aug 29, 2026 07:18 UTC · +1 / -1 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `.github/workflows/build-apk.yml` | Modified | +1 -1 |
</details>


---

### [`fa77b8d`](https://github.com/notamitgamer/bsc/commit/fa77b8d79cec368666ad02da9047c72976cb8dc5) chore(deps): bump actions/setup-java from 4 to 6 [skip ci]

**dependabot[bot]** committed on Aug 29, 2026 07:18 UTC · +1 / -1 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `.github/workflows/build-apk.yml` | Modified | +1 -1 |
</details>


---

### [`8fe1152`](https://github.com/notamitgamer/bsc/commit/8fe1152b926a8fdf5c0b68c2bcbbb004b3f0812b) chore(deps): bump actions/checkout from 4 to 7 [skip ci]

**dependabot[bot]** committed on Aug 29, 2026 07:18 UTC · +1 / -1 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `.github/workflows/build-apk.yml` | Modified | +1 -1 |
</details>


---

*This file is auto-generated on every deployment. For the live site, visit [code.amit.is-a.dev](https://code.amit.is-a.dev).*
*Check [/changelog](https://code.amit.is-a.dev/changelog) on the site to verify your browser is showing the latest build.*
