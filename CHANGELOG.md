# Changelog

> Last build: August 26, 2026 at 14:23 UTC

## Latest Build

- **Build ID** — `2a083009703b6cfa42bee6719787f814b3d73b23`
- **Triggered by** — [@notamitgamer](https://github.com/notamitgamer)
- **Branch** — `main`
- **Build time** — August 26, 2026 at 14:23 UTC

## Recent Commits

### [`2a08300`](https://github.com/notamitgamer/bsc/commit/2a083009703b6cfa42bee6719787f814b3d73b23) Merge pull request #90 from notamitgamer/remove-author-headers

**Amit Dutta** committed on Aug 26, 2026 14:23 UTC


---

### [`e2c1885`](https://github.com/notamitgamer/bsc/commit/e2c1885dfe692c3e97b8da71d9a4e4f412884763) Delete remove_headers.py

**Amit Dutta** committed on Aug 26, 2026 14:22 UTC · +0 / -178 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `remove_headers.py` | Removed | -178 |
</details>


---

### [`d2114a2`](https://github.com/notamitgamer/bsc/commit/d2114a291ceeed86a29a9fb5c457c46ab9ff3923) Remove author/date/repo/license headers from source files

**notamitgamer-bot[bot]** committed on Aug 26, 2026 14:16 UTC · +618 / -3292 lines · 447 files changed

<details>
<summary>Show 447 changed files</summary>

| File | Change | Lines |
| --- | --- | --- |
| `remove_headers.py` | Added | +178 |
| `semester_1/R/Code/R_Code-1.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-10.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-11.r` | Modified | -4 |
| `semester_1/R/Code/R_Code-12.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-13.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-14.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-2.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-4.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-5.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-6.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-7.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Code-8.r` | Modified | -4 |
| `semester_1/R/Code/R_Code-9.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Prac-1.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Prac-2.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Prac-3.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Prac-4.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Prac-5.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_Prac-6.r` | Modified | +1 -5 |
| `semester_1/R/Code/R_code-3.r` | Modified | +1 -5 |
| `semester_1/assignment-primary/assignment-p-01.c` | Modified | -7 |
| `semester_1/assignment-primary/assignment-p-02.c` | Modified | -7 |
| `semester_1/assignment-primary/assignment-p-03.c` | Modified | -6 |
| `semester_1/assignment-primary/assignment-p-04.c` | Modified | -7 |
| `semester_1/assignment-primary/assignment-p-05.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-06.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-07.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-08.c` | Modified | -6 |
| `semester_1/assignment-primary/assignment-p-09.c` | Modified | +1 -7 |
| `semester_1/assignment-primary/assignment-p-10.c` | Modified | -6 |
| `semester_1/assignment-primary/assignment-p-11.c` | Modified | -7 |
| `semester_1/assignment-primary/assignment-p-12_v1.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-12_v2.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-13.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-14_v1.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-14_v2.c` | Modified | +1 -8 |
| `semester_1/assignment-primary/assignment-p-15.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-01.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-02.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-03.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-04.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-05.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-06.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-07.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-08.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-09.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-10.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-11.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-12.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-13-1.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-13-2.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-14.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-15.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-16.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-17.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-18.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-19.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-20.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-21.c` | Modified | +1 -8 |
| `semester_1/assignment-secondary/assignment-s-22.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-23.c` | Modified | +1 -7 |
| `semester_1/assignment-secondary/assignment-s-24.c` | Modified | +1 -7 |
| `semester_1/eduincs_exam/Paper-1_05-03-2026/Qn-10.c` | Modified | -7 |
| `semester_1/eduincs_exam/Paper-1_05-03-2026/Qn-8.c` | Modified | +1 -8 |
| `semester_1/eduincs_exam/Paper-1_05-03-2026/Qn-9.c` | Modified | +1 -8 |
| `semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-11.c` | Modified | +1 -8 |
| `semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-3.c` | Modified | +1 -8 |
| `semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-4.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-01.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-02.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-03.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-04.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-05.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-06.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-07.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-08.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-09.c` | Modified | +1 -7 |
| `semester_1/internal-practice/IP-10.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-11.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-12.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-13.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-14.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-15.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-16.c` | Modified | -7 |
| `semester_1/internal-practice/IP-17.c` | Modified | -6 |
| `semester_1/internal-practice/IP-18.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-19.c` | Modified | +1 -8 |
| `semester_1/internal-practice/IP-20.c` | Modified | +1 -8 |
| `semester_1/khurapati-idea/KI001.c` | Modified | +1 -7 |
| `semester_1/khurapati-idea/KI002.c` | Modified | +1 -8 |
| `semester_1/khurapati-idea/KI003.c` | Modified | +1 -8 |
| `semester_1/khurapati-idea/KI004.c` | Modified | +1 -7 |
| `semester_1/khurapati-idea/interpeter.py` | Modified | +1 -7 |
| `semester_1/letusc/interest.h` | Modified | -5 |
| `semester_1/letusc/luc001.c` | Modified | -6 |
| `semester_1/letusc/luc002.c` | Modified | -6 |
| `semester_1/letusc/luc003.c` | Modified | -6 |
| `semester_1/letusc/luc004.c` | Modified | +1 -7 |
| `semester_1/letusc/luc005.c` | Modified | +1 -7 |
| `semester_1/letusc/luc006.c` | Modified | +1 -7 |
| `semester_1/letusc/luc007.c` | Modified | +1 -7 |
| `semester_1/letusc/luc008.c` | Modified | +1 -7 |
| `semester_1/letusc/luc009.c` | Modified | +1 -7 |
| `semester_1/letusc/luc010.c` | Modified | +1 -7 |
| `semester_1/letusc/luc011.c` | Modified | +1 -7 |
| `semester_1/letusc/luc012.c` | Modified | +1 -7 |
| `semester_1/letusc/luc013.c` | Modified | +1 -7 |
| `semester_1/letusc/luc014.c` | Modified | +1 -7 |
| `semester_1/letusc/luc015.c` | Modified | +1 -7 |
| `semester_1/letusc/luc016.c` | Modified | +1 -8 |
| `semester_1/letusc/luc017.c` | Modified | +1 -7 |
| `semester_1/letusc/luc018-logic.c` | Modified | +1 -8 |
| `semester_1/letusc/luc018.c` | Modified | +1 -7 |
| `semester_1/letusc/luc019.c` | Modified | +1 -8 |
| `semester_1/letusc/luc020.c` | Modified | +1 -8 |
| `semester_1/letusc/luc021.c` | Modified | +1 -8 |
| `semester_1/letusc/luc022.c` | Modified | +1 -8 |
| `semester_1/letusc/luc023.c` | Modified | +1 -7 |
| `semester_1/letusc/luc024.c` | Modified | +1 -7 |
| `semester_1/letusc/luc025.c` | Modified | +1 -7 |
| `semester_1/letusc/luc026.c` | Modified | +1 -7 |
| `semester_1/letusc/luc027.c` | Modified | +1 -7 |
| `semester_1/letusc/luc028.c` | Modified | +1 -7 |
| `semester_1/letusc/luc029.c` | Modified | +1 -7 |
| `semester_1/letusc/luc030.c` | Modified | +1 -8 |
| `semester_1/letusc/luc031-logic.c` | Modified | +1 -8 |
| `semester_1/letusc/luc031.c` | Modified | +1 -7 |
| `semester_1/letusc/luc032.c` | Modified | +1 -7 |
| `semester_1/letusc/luc033.c` | Modified | +1 -7 |
| `semester_1/letusc/luc034.c` | Modified | +1 -7 |
| `semester_1/letusc/luc035.c` | Modified | +1 -7 |
| `semester_1/letusc/luc036.c` | Modified | +1 -7 |
| `semester_1/letusc/luc037.c` | Modified | +1 -7 |
| `semester_1/letusc/luc038.c` | Modified | +1 -7 |
| `semester_1/letusc/luc039.c` | Modified | +1 -7 |
| `semester_1/letusc/luc040-logic.c` | Modified | -7 |
| `semester_1/letusc/luc040.c` | Modified | +1 -8 |
| `semester_1/letusc/luc041.c` | Modified | +1 -7 |
| `semester_1/letusc/luc042.c` | Modified | +1 -7 |
| `semester_1/letusc/luc043.c` | Modified | +1 -8 |
| `semester_1/letusc/luc044.c` | Modified | +1 -7 |
| `semester_1/letusc/luc045.c` | Modified | +1 -8 |
| `semester_1/letusc/luc046.c` | Modified | +1 -7 |
| `semester_1/letusc/luc047.c` | Modified | +1 -7 |
| `semester_1/letusc/luc048.c` | Modified | +1 -8 |
| `semester_1/letusc/luc049.c` | Modified | +1 -8 |
| `semester_1/letusc/luc050.c` | Modified | +1 -8 |
| `semester_1/letusc/luc051.c` | Modified | +1 -8 |
| `semester_1/letusc/luc052.c` | Modified | +1 -8 |
| `semester_1/letusc/luc053.c` | Modified | +1 -8 |
| `semester_1/letusc/luc054.c` | Modified | +1 -8 |
| `semester_1/letusc/luc055.c` | Modified | +1 -8 |
| `semester_1/letusc/luc056.c` | Modified | +1 -8 |
| `semester_1/letusc/luc057.c` | Modified | +1 -8 |
| `semester_1/letusc/luc058.c` | Modified | +1 -8 |
| `semester_1/letusc/luc059.c` | Modified | +1 -8 |
| `semester_1/letusc/luc060.c` | Modified | +1 -8 |
| `semester_1/letusc/luc061.c` | Modified | +1 -8 |
| `semester_1/letusc/luc062.c` | Modified | +1 -8 |
| `semester_1/letusc/luc063.c` | Modified | +1 -8 |
| `semester_1/letusc/luc064.c` | Modified | +1 -8 |
| `semester_1/letusc/luc065.c` | Modified | +1 -8 |
| `semester_1/letusc/luc066.c` | Modified | +1 -8 |
| `semester_1/letusc/luc067.c` | Modified | +1 -8 |
| `semester_1/letusc/luc068.c` | Modified | +1 -8 |
| `semester_1/letusc/luc069.c` | Modified | +1 -8 |
| `semester_1/letusc/luc070.c` | Modified | +1 -8 |
| `semester_1/letusc/luc071.c` | Modified | +1 -8 |
| `semester_1/letusc/luc072.c` | Modified | +1 -8 |
| `semester_1/letusc/luc073.c` | Modified | +1 -8 |
| `semester_1/letusc/luc074.c` | Modified | +1 -8 |
| `semester_1/letusc/luc075.c` | Modified | +1 -8 |
| `semester_1/letusc/luc076.c` | Modified | +1 -8 |
| `semester_1/letusc/luc077.c` | Modified | +1 -8 |
| `semester_1/letusc/luc078.c` | Modified | +1 -8 |
| `semester_1/letusc/luc079.c` | Modified | +1 -8 |
| `semester_1/letusc/luc080.c` | Modified | +1 -8 |
| `semester_1/letusc/luc081.c` | Modified | +1 -8 |
| `semester_1/letusc/luc082.c` | Modified | +1 -8 |
| `semester_1/letusc/luc083.c` | Modified | +1 -8 |
| `semester_1/letusc/luc084.c` | Modified | +1 -8 |
| `semester_1/letusc/luc085.c` | Modified | +1 -8 |
| `semester_1/letusc/luc086.c` | Modified | +1 -8 |
| `semester_1/letusc/luc087.c` | Modified | +1 -8 |
| `semester_1/letusc/luc088.c` | Modified | +1 -8 |
| `semester_1/letusc/luc089.c` | Modified | +1 -8 |
| `semester_1/letusc/luc090.c` | Modified | +1 -8 |
| `semester_1/letusc/luc091.c` | Modified | +1 -8 |
| `semester_1/letusc/luc092.c` | Modified | +1 -8 |
| `semester_1/letusc/luc093.c` | Modified | +1 -8 |
| `semester_1/letusc/luc094.c` | Modified | +1 -8 |
| `semester_1/letusc/luc095.c` | Modified | +1 -8 |
| `semester_1/letusc/luc096.c` | Modified | +1 -8 |
| `semester_1/letusc/luc097.c` | Modified | +1 -8 |
| `semester_1/letusc/luc098.c` | Modified | +1 -8 |
| `semester_1/letusc/luc099.c` | Modified | +1 -8 |
| `semester_1/letusc/luc100.c` | Modified | +1 -8 |
| `semester_1/letusc/luc101.c` | Modified | +1 -8 |
| `semester_1/letusc/luc102.c` | Modified | +1 -8 |
| `semester_1/letusc/luc103.c` | Modified | +1 -8 |
| `semester_1/letusc/luc104.c` | Modified | +1 -8 |
| `semester_1/letusc/luc105.c` | Modified | +1 -8 |
| `semester_1/letusc/luc106.c` | Modified | +1 -8 |
| `semester_1/letusc/luc107.c` | Modified | +1 -8 |
| `semester_1/letusc/luc108.c` | Modified | +1 -8 |
| `semester_1/letusc/luc109.c` | Modified | +1 -8 |
| `semester_1/letusc/luc110.c` | Modified | +1 -8 |
| `semester_1/letusc/luc111.c` | Modified | +1 -8 |
| `semester_1/letusc/luc112.c` | Modified | +1 -8 |
| `semester_1/letusc/luc113.c` | Modified | +1 -8 |
| `semester_1/letusc/luc114.c` | Modified | +1 -8 |
| `semester_1/letusc/luc115.c` | Modified | +1 -8 |
| `semester_1/letusc/luc116.c` | Modified | +1 -8 |
| `semester_1/letusc/luc117.c` | Modified | +1 -8 |
| `semester_1/letusc/luc118.c` | Modified | +1 -8 |
| `semester_1/letusc/luc119.c` | Modified | +1 -8 |
| `semester_1/letusc/lucproblem001.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem002.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem003.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem004.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem005.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem006.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem007.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem008.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem009.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem010-complex.c` | Modified | -7 |
| `semester_1/letusc/lucproblem010.c` | Modified | +1 -8 |
| `semester_1/letusc/lucproblem011.c` | Modified | +1 -8 |
| `semester_1/letusc/lucproblem012.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem013.c` | Modified | +1 -7 |
| `semester_1/letusc/lucproblem014-short.c` | Modified | +1 -8 |
| `semester_1/letusc/lucproblem014.c` | Modified | +1 -8 |
| `semester_1/letusc/lucproblem015.c` | Modified | +1 -8 |
| `semester_1/letusc/lucproblem016.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-01.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-02.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-03.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-04.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-05.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-06.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-07.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-08.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-09.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-10.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-11.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-12.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-13.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-14.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-15.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-16.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-17.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc-ip-18.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-19.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc-ip-20.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc001.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc002.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc003.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc004.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc005.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc006.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc007.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc008.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc009.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc010.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc011.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc012.c` | Modified | +1 -8 |
| `semester_1/practice-c/pc013.c` | Modified | +1 -7 |
| `semester_1/practice-c/pc014.c` | Modified | +58 -64 |
| `semester_1/practice-c/pc015.c` | Modified | -6 |
| `semester_1/practice-c/pc016.c` | Modified | -6 |
| `semester_1/practice-c/pc017.c` | Modified | -6 |
| `semester_1/temp/sudipto1.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-PRAC-001.c` | Modified | -7 |
| `semester_1/tuition-c/APC-PRAC-002.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-003.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-004.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-005.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-006.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-007.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-008.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-009.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-010.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-011.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-012.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-013.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-014.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-015.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-016.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-017.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-018.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-019.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-020.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-021.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-022.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-PRAC-023.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-PRAC-024.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-025.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-026.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-027.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-028.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-029.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-030.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-031.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-032.c` | Modified | -6 |
| `semester_1/tuition-c/APC-PRAC-033.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-034.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-035.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-036.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-PRAC-037.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-PRAC-038.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-039.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-040.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-PRAC-041.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-PRAC-042.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-S-001.c` | Modified | -6 |
| `semester_1/tuition-c/APC-S-002.c` | Modified | -6 |
| `semester_1/tuition-c/APC-S-003.c` | Modified | -6 |
| `semester_1/tuition-c/APC-S-004.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-005.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-006.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-007.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-008.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-S-009.c` | Modified | +1 -8 |
| `semester_1/tuition-c/APC-S-010.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-011.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-012.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-S-013.c` | Modified | -6 |
| `semester_1/tuition-c/APC-S-014.c` | Modified | +1 -7 |
| `semester_1/tuition-c/APC-SPS-001.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-002.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-003.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-004.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-005.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-006.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-007.c` | Modified | -6 |
| `semester_1/tuition-c/APC-SPS-008.c` | Modified | -6 |
| `semester_1/tuition-c/P001.c` | Modified | -6 |
| `semester_1/tuition-c/P002.c` | Modified | -6 |
| `semester_1/tuition-c/P003.c` | Modified | -6 |
| `semester_1/tuition-c/P004.c` | Modified | -6 |
| `semester_1/tuition-c/P005.c` | Modified | -6 |
| `semester_1/tuition-c/P006.c` | Modified | -6 |
| `semester_1/tuition-c/P007.c` | Modified | -6 |
| `semester_1/tuition-c/P008.c` | Modified | -6 |
| `semester_1/tuition-c/P009.c` | Modified | -6 |
| `semester_1/tuition-c/P010.c` | Modified | -6 |
| `semester_1/tuition-c/P011.c` | Modified | -6 |
| `semester_1/tuition-c/P012.c` | Modified | -6 |
| `semester_1/tuition-c/P013.c` | Modified | -6 |
| `semester_1/tuition-c/P014.c` | Modified | -6 |
| `semester_1/tuition-c/P015.c` | Modified | -6 |
| `semester_1/tuition-c/P016.c` | Modified | -6 |
| `semester_1/tuition-c/P017.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P018.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P019.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P020.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P021.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P022.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P023.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P024.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P025.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P026.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P027.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P028.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P029.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P030.c` | Modified | -7 |
| `semester_1/tuition-c/P031.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P032.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P033.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P034.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P035.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P036.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P037.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P038.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P039.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P040.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P041.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P042.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P043.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P044.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P045.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P046.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P047.c` | Modified | -6 |
| `semester_1/tuition-c/P048.c` | Modified | -6 |
| `semester_1/tuition-c/P049.c` | Modified | -6 |
| `semester_1/tuition-c/P050-SHORT.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P050.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P051.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P052.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P053.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P054.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P055.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P056.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P057.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P058.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P059.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P060.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P061.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P062.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P063.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P064.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P065.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P066.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P067.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P068.c` | Modified | +1 -7 |
| `semester_1/tuition-c/P069.c` | Modified | +1 -8 |
| `semester_1/tuition-c/P070.c` | Modified | +1 -8 |
| `semester_2/assignments/assignment_01.cpp` | Modified | -5 |
| `semester_2/assignments/assignment_02.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_001.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_002.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_003.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_004.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_005.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_006.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_007.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_008.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_009.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_010.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_011.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_012.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_013.cpp` | Modified | -5 |
| `semester_2/eduincs/pgrm_014.cpp` | Modified | -5 |
| `semester_2/eduincs/pgrm_015.cpp` | Modified | -5 |
| `semester_2/eduincs/pgrm_016.cpp` | Modified | +1 -7 |
| `semester_2/eduincs/pgrm_017.cpp` | Modified | -6 |
| `semester_2/practice/prac_001.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_002.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_003.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_004.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_005.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_006.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_007.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_008.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_009.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_010.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_011.cpp` | Modified | +1 -7 |
| `semester_2/practice/prac_012.cpp` | Modified | +1 -7 |
| `semester_2/python/code_01.py` | Modified | +1 -5 |
| `semester_2/tuition/apc_001.cpp` | Modified | +1 -7 |
| `semester_2/tuition/apc_002.cpp` | Modified | +1 -7 |
| `utils/bsc_md/builders.py` | Modified | +2 -15 |
| `utils/bsc_md/formatting.py` | Modified | -20 |
| `utils/bsc_md/parsers.py` | Modified | +4 -43 |
| `utils/bsc_md/pipeline.py` | Modified | +3 -3 |
| `utils/deploy_pipeline.py` | Modified | +1 -7 |
</details>


---

### [`7c8b005`](https://github.com/notamitgamer/bsc/commit/7c8b005ba60cd910a718d205c1a112bacd2ccdd7) chore: update changelog [skip ci]

**bot-for-notamitgamer[bot]** committed on Aug 25, 2026 15:51 UTC · +33 / -33 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `CHANGELOG.md` | Modified | +33 -33 |
</details>


---

### [`5c034f0`](https://github.com/notamitgamer/bsc/commit/5c034f065870ddb524f5f808805623afa8fe15e1) copy

**Amit Dutta** committed on Aug 25, 2026 15:50 UTC · +37 / -0 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `semester_2/eduincs/pgrm_017.cpp` | Added | +37 |
</details>


---

### [`ed11d71`](https://github.com/notamitgamer/bsc/commit/ed11d71ed3e077a53a17e3ad9a514e86fd37e322) chore: update changelog [skip ci]

**bot-for-notamitgamer[bot]** committed on Aug 25, 2026 08:52 UTC · +37 / -37 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `CHANGELOG.md` | Modified | +37 -37 |
</details>


---

### [`ba4e20d`](https://github.com/notamitgamer/bsc/commit/ba4e20d3ebb199b59742d0cd5cbaba122c33e65c) Merge pull request #89 from notamitgamer/dependabot/github_actions/actions/cache-6

**Amit Dutta** committed on Aug 25, 2026 08:51 UTC


---

### [`36f22bf`](https://github.com/notamitgamer/bsc/commit/36f22bf5cb75fbe63369f438448a4d3fd65101c5) chore(deps): bump actions/cache from 4 to 6

**dependabot[bot]** committed on Aug 24, 2026 21:25 UTC · +1 / -1 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `.github/workflows/main.yml` | Modified | +1 -1 |
</details>


---

### [`0cdda6e`](https://github.com/notamitgamer/bsc/commit/0cdda6ed86cdc60897ab51f898dfcae1bacb3cf4) chore: update changelog [skip ci]

**bot-for-notamitgamer[bot]** committed on Aug 24, 2026 15:13 UTC · +36 / -34 lines · 1 file changed

<details>
<summary>Show 1 changed file</summary>

| File | Change | Lines |
| --- | --- | --- |
| `CHANGELOG.md` | Modified | +36 -34 |
</details>


---

### [`28cea3a`](https://github.com/notamitgamer/bsc/commit/28cea3a368686b9c0fd536aebd96f3ca3b5f6abf) Merge pull request #88 from notamitgamer2/remove-bundle-backup

**Amit Dutta** committed on Aug 24, 2026 15:12 UTC


---

*This file is auto-generated on every deployment. For the live site, visit [code.amit.is-a.dev](https://code.amit.is-a.dev).*
*Check [/changelog](https://code.amit.is-a.dev/changelog) on the site to verify your browser is showing the latest build.*
