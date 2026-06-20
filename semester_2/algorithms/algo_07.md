# algo_07

### Problem Statement

> Write an algorithm to search an element from a linked list.

## Algorithm
```
procedure search(head, key)
begin
    isFound ← false;
    ptr ← head;
    while(ptr ≠ NULL)
        if(info(ptr) = key)
            isFound ← true;
            break;
        endif
        ptr ← next(ptr);
    end while
    return(isFound);
end procedure
```