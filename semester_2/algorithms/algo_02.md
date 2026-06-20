# algo_02

### Problem Statement

> Write an algorithm to delete the first node of the list.

## Algorithm
```
procedure delete_firstNode(head)
begin
    if(head = NULL)
        write("List is empty, Deletion is not possible.");
    else 
        p ← head ;
        head ← next(p);
        delete(p);
    endif
    return(head);
end procedure
```