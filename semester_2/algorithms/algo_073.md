# algo_073

### Problem Statement

> Write an algorithm to transpose a sparse matrix represented in triplet form.

## Algorithm
```
procedure TransposeTriplet(T1, T2)
begin
    ROW ← T1[1, 1]
    COL ← T1[1, 2]
    VAL ← T1[1, 3]
    
    T2[1, 1] ← COL
    T2[1, 2] ← ROW
    T2[1, 3] ← VAL
    
    if VAL > 0 then
        k ← 2
        for i ← 1 to COL do
            for j ← 2 to VAL + 1 do
                if T1[j, 2] = i then
                    T2[k, 1] ← T1[j, 2]
                    T2[k, 2] ← T1[j, 1]
                    T2[k, 3] ← T1[j, 3]
                    k ← k + 1
                endif
            endfor
        endfor
    endif
end procedure
```
