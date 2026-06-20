# algo_04

### Problem Statement

> Write an algorithm to count number of nodes in a singly linked list.

## Algorithm
```
procedure count(head)
begin
    count = 0;
    if(head = NULL)
        write(count);
    else 
        ptr ← head;
        while(ptr ≠ NULL)
            count ← count + 1;
            ptr ← next(ptr);
        end while
        write(count);
    endif
end procedure
```