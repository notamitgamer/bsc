# algo_025

### Problem Statement

> Write an algorithm to delete the last node from a double linked list.

## Algorithm
```
procedure delete_lastNode(dl)
begin
    if(dl = NULL)
        write("List is empty. deletion not possible");
    else
        ptr ← dl;
        if(next(ptr) = NULL)
            dl ← next(ptr);
            delete(ptr);
        else
            while(next(ptr) ≠ NULL)
                ptr ← next(ptr);
            end while
            ptr ← prev(ptr);
            next(ptr) ← NULL;
            delete(ptr);
        endif
    endif
    return(dl);
end procedure
```