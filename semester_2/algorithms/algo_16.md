# algo_16

### Problem Statement

> Write an algorithm to traverse or display a circular linked list.

## Algorithm
```
procedure display(cl)
begin
    if(cl = NULL)
        write("The list is empty.");
    else
        ptr ← next(cl); //Points to the first node.
        do{
            write(info(ptr));
            ptr ← next(ptr);
        } while(ptr ≠ next(cl));
    endif
end procedure
```