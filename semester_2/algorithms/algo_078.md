# algo_078

### Problem Statement

> Write an algorithm to delete an element from a deque (from the front).

## Algorithm
```
procedure DeleteDequeFront(DEQ, MAX, FRONT, REAR)
begin
    if FRONT = -1 then
        print("Underflow")
        return(NULL)
    endif
    
    ITEM ← DEQ[FRONT]
    
    if FRONT = REAR then
        FRONT ← -1
        REAR ← -1
    else if FRONT = MAX then
        FRONT ← 1
    else
        FRONT ← FRONT + 1
    endif
    
    return(ITEM)
end procedure
```
