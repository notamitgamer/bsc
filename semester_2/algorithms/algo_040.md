# algo_040

### Problem Statement

> Write an algorithm to enqueue an element into a linear queue using linked representation.

## Algorithm
```
procedure enqueue(rear, front, val)
begin
    ptr ← getNode();
    info(ptr) ← val;
    next(ptr) ← NULL;
    if (front = NULL and rear = NULL) then
        front ← ptr;
        rear ← ptr;
    else
        next(rear) ← ptr;
        rear ← ptr;
    endif
    return(rear);
end procedure
```
