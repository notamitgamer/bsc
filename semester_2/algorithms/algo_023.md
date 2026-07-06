# algo_023

### Problem Statement

> Write an algorithm to insert a node after the specified node in double linked list.

## Algorithm
```
procedure insert(dl, val, key)
begin
    ptr ← dl;
    found ← 0;
    while(ptr)
        if(info(ptr) = key)
            found ← 1;
            break;
        endif
        ptr ← next(ptr);
    end while
    if(found)
        nptr ← getNode();
        info(nptr) ← val;
        next(nptr) ← NULL;
        prev(nptr) ← NULL;
        if(next(ptr) = NULL)
            prev(nptr) ← ptr;
            next(ptr) ← nptr;
        else
            next(nptr) ← next(ptr);
            prev(next(ptr)) ← nptr;
            next(ptr) ← nptr;
            prev(nptr) ← ptr;
        end if
    else
        write("key not found");
    endif
end procedure
```