# algo_021

### Problem Statement

> Write an algorithm to insert a node at the beginning of a double linked list.

## Algorithm
```
procedure insert_begin(dl, val)
begin
    ptr ← getNode();
    info(ptr) ← val;
    prev(ptr) ← NULL;
    next(ptr) ← NULL;
    if(dl = NULL)
        dl ← ptr;
    else
        next(ptr) ← dl;
        prev(dl) ← ptr;
        dl ← ptr;
    endif
    return(dl);
end procedure
```