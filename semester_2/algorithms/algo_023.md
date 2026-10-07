# algo_023

### Problem Statement

> Write an algorithm to insert a node after the specified node in double linked list.

## Algorithm
```
Procedure insert(dl, val, key)
begin
    ptr ← dl;
    found ← 0;

    while (ptr ≠ NULL) do
        if (INFO(ptr) = key) then
            found ← 1;
            break;
        endif
        ptr ← next(ptr);
    endwhile

    if (found = 1) then
        nptr ← getNode();
        INFO(nptr) ← val;
        next(nptr) ← NULL;
        prev(nptr) ← NULL;

        if (next(ptr) = NULL) then
            prev(nptr) ← ptr;
            next(ptr) ← nptr;
        else
            next(nptr) ← next(ptr);
            prev(next(ptr)) ← nptr;
            next(ptr) ← nptr;
            prev(nptr) ← ptr;
        endif
    else
        write("Key not found");
    endif

    return(dl);
end procedure
```
