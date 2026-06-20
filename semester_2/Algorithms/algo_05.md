# algo_05

### Problem Statement

> Write an algorithm to insert a node at the end of the list.

## Algorithm
```
procedure insertEnd(head)
begin
    nptr ← getnode();
    write("Enter info: ");
    read(val);
    info(nptr) ← val;
    if(head = NULL)
        head ← nptr;
    else
        ptr ← head;
        while(next(ptr) ≠ NULL)
            ptr ← next(ptr);
        end while
        next(ptr) ← nptr;
    endif
    return(head);
end procedure
```