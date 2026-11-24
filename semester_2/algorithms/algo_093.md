# algo_093

### Problem Statement

> Write an algorithm to implement a Lower Triangular Matrix using a one-dimensional array and add two Lower Triangular matrices.

## Algorithm
```
procedure StoreLowerTriangular(A, N)
begin
    for I ← 0 to N - 1 do
        for J ← 0 to N - 1 do
            read(VAL)
            if I >= J then
                INDEX ← (I * (I + 1)) div 2 + J
                A[INDEX] ← VAL
            endif
        endfor
    endfor
end procedure

procedure AddLowerTriangular(A, B, C, N)
begin
    TOTAL ← (N * (N + 1)) div 2
    for K ← 0 to TOTAL - 1 do
        C[K] ← A[K] + B[K]
    endfor
end procedure

procedure DisplayLowerTriangular(C, N)
begin
    for I ← 0 to N - 1 do
        for J ← 0 to N - 1 do
            if I >= J then
                INDEX ← (I * (I + 1)) div 2 + J
                print(C[INDEX])
            else
                print(0)
            endif
        endfor
    endfor
end procedure
```