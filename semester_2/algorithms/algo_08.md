# algo_08

### Problem Statement

> Write an algorithm to find max element from the list.

## Algorithm
```
procedure findMax(head)
begin
    if(head = NULL)
        write("List is empty.");
    else 
        ptr ← head;
        max ← info(ptr);
        while(ptr ≠ NULL)
            if(max < info(ptr))
                max ← info(ptr);
            endif
            ptr ← next(ptr);
        end while
        return(max);
    endif
end procedure
```