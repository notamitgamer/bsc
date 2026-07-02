# algo_15

### Problem Statement

> Write an algorithm to insert a node at the beginning of a circular linked list.

## Algorithm
```
procedure insertBegin(cl)
begin
    ptr ← getNode()
    write("Enter the value: ");
    read(val);
    info(ptr) ← val;
    next(ptr) ← ptr;
    if(cl = NULL) 
        cl ← ptr;
    else 
        next(ptr) ← next(cl);
        next(cl) ← ptr;
    endif
    return(cl);
end procedure
```