# algo_01

### Problem Statement

> Write an algorithm to insert a node at the beginning.

## Algorithm
```
procedure insert_begin(head)
begin
    ptr ← get_node();
    print("Enter the value");
    read(val);
    info(ptr) ← val;
    next(ptr) ← NULL;
    if(head = NULL) 
        head ← ptr;
    else
        next(ptr) ← head;
        head ← ptr;
    endif
    return(head);
end procedure
```