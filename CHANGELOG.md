# Changelog

> Last build: September 01, 2026 at 14:42 UTC

## Latest Build

- **Build ID** — `b30384b98d7058086ffa0cce893aa81225ec1902`
- **Triggered by** — [@notamitgamer](https://github.com/notamitgamer)
- **Branch** — `main`
- **Build time** — September 01, 2026 at 14:42 UTC

## Recent Commits

### [`b30384b`](https://github.com/notamitgamer/bsc/commit/b30384b98d7058086ffa0cce893aa81225ec1902) Merge pull request #115 from notamitgamer/edit-20260901-201133

**Amit Dutta** committed on Sep 01, 2026 14:42 UTC


---

### [`1f08ce8`](https://github.com/notamitgamer/bsc/commit/1f08ce8518c1d122e97b504282ce770aa2ee1b66) added new algorithms

**Amit Dutta** committed on Sep 01, 2026 14:41 UTC · +206 / -0 lines · 10 files changed

<details>
<summary>Show 10 changed files</summary>

| File | Change | Lines |
| --- | --- | --- |
| `semester_2/algorithms/algo_053.md` | Added | +17 |
| `semester_2/algorithms/algo_054.md` | Added | +21 |
| `semester_2/algorithms/algo_055.md` | Added | +17 |
| `semester_2/algorithms/algo_056.md` | Added | +21 |
| `semester_2/algorithms/algo_057.md` | Added | +19 |
| `semester_2/algorithms/algo_058.md` | Added | +22 |
| `semester_2/algorithms/algo_059.md` | Added | +18 |
| `semester_2/algorithms/algo_060.md` | Added | +21 |
| `semester_2/algorithms/algo_061.md` | Added | +17 |
| `semester_2/algorithms/algo_062.md` | Added | +33 |
</details>


---

### [`b63a3e7`](https://github.com/notamitgamer/bsc/commit/b63a3e78f8ed01846d83e55ac6c3f21ec1fe8b15) chore: update changelog [skip ci]

**bot-for-notamitgamer[bot]** committed on Aug 30, 2026 02:23 UTC · +50 / -39 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `CHANGELOG.md` | Modified | +50 -39 |
</details>


---

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

*This file is auto-generated on every deployment. For the live site, visit [code.amit.is-a.dev](https://code.amit.is-a.dev).*
*Check [/changelog](https://code.amit.is-a.dev/changelog) on the site to verify your browser is showing the latest build.*
