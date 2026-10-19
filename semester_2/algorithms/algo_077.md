# algo_077

### Problem Statement

> Write an algorithm to insert an element into a deque at the rear end.

## Algorithm
```
procedure InsertDequeRear(DEQ, MAX, FRONT, REAR, ITEM)
begin
    if (FRONT = 1 and REAR = MAX) or (FRONT = REAR + 1) then
        print("Overflow")
        return()
    endif
    
    if FRONT = -1 then
        FRONT ← 1
        REAR ← 1
    else if REAR = MAX then
        REAR ← 1
    else
        REAR ← REAR + 1
    endif
    
    DEQ[REAR] ← ITEM
end procedure
```
