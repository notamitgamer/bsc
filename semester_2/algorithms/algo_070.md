# algo_070

### Problem Statement

> Write an algorithm to insert an element into an array at a given position.

## Algorithm
```
procedure InsertArray(A, N, MAX, POS, ITEM)
begin
    if N = MAX then
        print("Overflow")
        return()
    endif
    
    if POS < 1 or POS > N + 1 then
        print("Invalid position")
        return()
    endif
    
    for i ← N down to POS do
        A[i + 1] ← A[i]
    endfor
    
    A[POS] ← ITEM
    N ← N + 1
end procedure
```
