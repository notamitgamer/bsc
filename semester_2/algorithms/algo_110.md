# algo_110

### Problem Statement

> Write an algorithm to scan two polynomials using an Array and add them.

## Algorithm
```
procedure AddPolynomialArrays(P1, DEG1, P2, DEG2, RES, MAXDEG)
begin
    if DEG1 > DEG2 then
        MAXDEG ← DEG1
    else
        MAXDEG ← DEG2
    endif

    for I ← 0 to MAXDEG do
        RES[I] ← 0
    endfor

    for I ← 0 to DEG1 do
        RES[I] ← RES[I] + P1[I]
    endfor

    for I ← 0 to DEG2 do
        RES[I] ← RES[I] + P2[I]
    endfor
end procedure
```