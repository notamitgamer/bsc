# algo_042

### Problem Statement

> Write an algorithm to enqueue an element into a circular queue using linked representation.

## Algorithm
```
procedure enqueue(cq, val)
begin
    ptr ← getNode();
    info(ptr) ← val;
    next(ptr) ← ptr;
    if (cq = NULL) then
        cq ← ptr;
    else
        next(ptr) ← next(cq);
        next(cq) ← ptr;
        cq ← ptr;
    endif
    return(cq);
end procedure
```
