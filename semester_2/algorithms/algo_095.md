# algo_095

### Problem Statement

> Write an algorithm to convert a Sparse Matrix into non-zero (3-tuple) form and vice-versa.

## Algorithm
```
procedure MatrixToSparse(MAT, R, C, SPARSE)
begin
    COUNT ← 0
    for I ← 0 to R - 1 do
        for J ← 0 to C - 1 do
            if MAT[I][J] != 0 then
                COUNT ← COUNT + 1
            endif
        endfor
    endfor

    SPARSE[0][0] ← R
    SPARSE[0][1] ← C
    SPARSE[0][2] ← COUNT

    K ← 1
    for I ← 0 to R - 1 do
        for J ← 0 to C - 1 do
            if MAT[I][J] != 0 then
                SPARSE[K][0] ← I
                SPARSE[K][1] ← J
                SPARSE[K][2] ← MAT[I][J]
                K ← K + 1
            endif
        endfor
    endfor
end procedure

procedure SparseToMatrix(SPARSE, MAT)
begin
    R ← SPARSE[0][0]
    C ← SPARSE[0][1]
    COUNT ← SPARSE[0][2]

    for I ← 0 to R - 1 do
        for J ← 0 to C - 1 do
            MAT[I][J] ← 0
        endfor
    endfor

    for K ← 1 to COUNT do
        ROW ← SPARSE[K][0]
        COL ← SPARSE[K][1]
        MAT[ROW][COL] ← SPARSE[K][2]
    endfor
end procedure
```