# `APC-S-003.c`

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-S-003.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-S-003.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
int main() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("Result is %d\n", result);

    result = (a == b) && (c < b);
    printf("Result is %d\n", result);

    result = (a != b) || (c < b);
    printf("Result is %d\n", result);

    result = (a != b) || (c < b);
    printf("Result is %d\n", result);

    result = !(a != b);
    printf("Result is %d\n", result);

    result = !(a == b);
    printf("Result is %d\n", result);

    return 0;
}
```
