# algo_071

### Problem Statement

> Write an algorithm to delete an element from an array at a given position.

## Algorithm
```
procedure DeleteArray(A, N, POS)
begin
    if N = 0 then
        print("Underflow")
        return()
    endif
    
    if POS < 1 or POS > N then
        print("Invalid position")
        return()
    endif
    
    ITEM ← A[POS]
    
    for i ← POS to N - 1 do
        A[i] ← A[i + 1]
    endfor
    
    N ← N - 1
    return(ITEM)
end procedure
```
