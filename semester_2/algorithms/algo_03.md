# algo_03

### Problem Statement

> Write an algorithm to traverse a singly linked list.

## Algorithm
```
procedure traverce(head)
begin
    if(head = NULL)
        write("List is empty");
    else
        ptr ← head;
        while(ptr ≠ NULL)
            write(info(ptr));
            ptr ← next(ptr);
        end while
    end if
end procedure
```