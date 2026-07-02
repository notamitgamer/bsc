# algo_18

### Problem Statement

> Write an algorithm to delete the first node of the circular linked list.

## Algorithm
```
procedure delFirst(cl)
begin
    if(cl = NULL)
        write("Nothing to delete.");
    else
        ptr ← next(cl);
        if(ptr = cl)
            delete(ptr);
            cl ← NULL;
        else
            next(cl) ← next(ptr);
            delete(ptr);
        endif
        return(cl);
    endif
end procedure
```