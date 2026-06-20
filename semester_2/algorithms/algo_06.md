# algo_06

### Problem Statement

> Write an algorithm to delete the last node of the list.

## Algorithm
```
procedure deletelastnode(head)
begin
    if(head = NULL)
        write("List is empty, deletion not possible.");
    else if(next(head) = NULL) 
        ptr ← head;
        head ← next(ptr);
        delete(ptr);
    else 
        ptr ← head;
        while(next(ptr) ≠ NULL)
            prev ← ptr;
            ptr ← next(ptr);
        end while
        delete(ptr);
        next(prev) ← NULL;
    endif
    return(head);
end procedure
```