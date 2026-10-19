# algo_063

### Problem Statement

> Write an algorithm to perform linear search in an array.

## Algorithm
```
procedure LinearSearch(A, N, ITEM)
begin
    if N = 0 then
        print("Array is empty")
        return(-1)
    endif
    
    for i ← 1 to N do
        if A[i] = ITEM then
            return(i)
        endif
    endfor
    
    return(-1)
end procedure
```
