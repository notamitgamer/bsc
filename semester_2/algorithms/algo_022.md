# algo_022

### Problem Statement

> Write an algorithm to insert a node at the end of a double linked list.

## Algorithm
```
procedure insert_end(dl, val)
begin
    // node creation and initialization
    nptr ← getNode();
    info(nptr) ← val;
    prev(nptr) ← NULL;
    next(nptr) ← NULL;
    // List is empty
    if(dl = NULL)
        dl ← nptr;
    else // List is not empty
        p ← dl;
        while(next(p) ≠ NULL) // move 'p' to the last node.
            p ← next(p);
        end while
        prev(nptr) ← p; // insertion at the end
        next(p) ← nptr;
    endif
    return(dl);
end procedure
```