# algo_043

### Problem Statement

> Write an algorithm to dequeue an element from a circular queue using linked representation.

## Algorithm
```
procedure dequeue(cq)
begin
    if (cq = NULL) then
        write("Deletion not possible");
    else if (next(cq) = cq) then
        ptr ← cq;
        cq ← NULL;
        delete(ptr);
    else
        ptr ← next(cq);
        next(cq) ← next(ptr);
        delete(ptr);
    endif
    return(cq);
end procedure
```
