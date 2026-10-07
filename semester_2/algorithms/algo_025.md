# algo_025

### Problem Statement

> Write an algorithm to delete the last node from a double linked list.

## Algorithm
```
Procedure delete_lastNode(dl)
begin
    if (dl = NULL) then
        write("List is empty, deletion not possible.");
    else
        ptr ← dl;
        if (next(ptr) = NULL) then
            dl ← NULL;
            delete(ptr);
        else
            while (next(ptr) ≠ NULL) do
                ptr ← next(ptr);
            endwhile
            next(prev(ptr)) ← NULL;
            delete(ptr);
        endif
    endif
    return(dl);
end procedure
```
