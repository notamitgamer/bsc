# algo_072

### Problem Statement

> Write an algorithm to convert a sparse matrix to triplet form.

## Algorithm
```
procedure SparseToTriplet(MAT, ROW, COL, TRIPLET)
begin
    TRIPLET[1, 1] ← ROW
    TRIPLET[1, 2] ← COL
    k ← 2
    count ← 0
    
    for i ← 1 to ROW do
        for j ← 1 to COL do
            if MAT[i, j] != 0 then
                TRIPLET[k, 1] ← i
                TRIPLET[k, 2] ← j
                TRIPLET[k, 3] ← MAT[i, j]
                k ← k + 1
                count ← count + 1
            endif
        endfor
    endfor
    
    TRIPLET[1, 3] ← count
end procedure
```
