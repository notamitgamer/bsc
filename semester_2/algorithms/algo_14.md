# algo_14

### Problem Statement

> Write an algorithm to insert an element at the end of a circular linked list.

## Algorithm
```
procedure insertEnd(cl)
begin
    ptr ← getNode();
    write("Enter the value: ");
    read(val);
    info(ptr) ← val;
    next(ptr) ← ptr;
    if(cl) // cl ≠ NULL
        next(ptr) ← next(cl);
        next(cl) ← ptr;
    endif
    cl ← ptr;
    return(cl);
end procedure
```