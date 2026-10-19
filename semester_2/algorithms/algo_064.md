# algo_064

### Problem Statement

> Write an algorithm to perform binary search in a sorted array.

## Algorithm
```
procedure BinarySearch(A, N, ITEM)
begin
    if N = 0 then
        print("Array is empty")
        return(-1)
    endif

    low ← 1
    high ← N
    
    while low <= high do
        mid ← (low + high) / 2
        
        if A[mid] = ITEM then
            return(mid)
        endif
        
        if A[mid] < ITEM then
            low ← mid + 1
        else
            high ← mid - 1
        endif
    endwhile
    
    return(-1)
end procedure
```
