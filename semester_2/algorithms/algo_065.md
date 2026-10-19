# algo_065

### Problem Statement

> Write an algorithm to perform bubble sort.

## Algorithm
```
procedure BubbleSort(A, N)
begin
    if N <= 1 then
        return()
    endif

    for i ← 1 to N - 1 do
        for j ← 1 to N - i do
            if A[j] > A[j+1] then
                temp ← A[j]
                A[j] ← A[j+1]
                A[j+1] ← temp
            endif
        endfor
    endfor
end procedure
```
