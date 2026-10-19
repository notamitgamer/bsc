# algo_066

### Problem Statement

> Write an algorithm to perform selection sort.

## Algorithm
```
procedure SelectionSort(A, N)
begin
    if N <= 1 then
        return()
    endif

    for i ← 1 to N - 1 do
        min_idx ← i
        
        for j ← i + 1 to N do
            if A[j] < A[min_idx] then
                min_idx ← j
            endif
        endfor
        
        if min_idx != i then
            temp ← A[i]
            A[i] ← A[min_idx]
            A[min_idx] ← temp
        endif
    endfor
end procedure
```
