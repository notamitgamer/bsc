# algo_067

### Problem Statement

> Write an algorithm to perform insertion sort.

## Algorithm
```
procedure InsertionSort(A, N)
begin
    if N <= 1 then
        return()
    endif

    for i ← 2 to N do
        key ← A[i]
        j ← i - 1
        
        while j > 0 and A[j] > key do
            A[j+1] ← A[j]
            j ← j - 1
        endwhile
        
        A[j+1] ← key
    endfor
end procedure
```
