# algo_024

### Problem Statement

> Write an algorithm to delete the first node of double linked list.

## Algorithm
```
procedure delete_firstnode(dl)
begin
    if(dl = NULL)
        write("list is empty, deletion not possible");
    else
        ptr ← dl;
        if(next(ptr) = NULL)
            dl ← next(ptr);
        else
            dl ← next(ptr);
            prev(dl) ← NULL;
        end if
        delete(ptr);
    endif
    return(dl);
end procedure
```