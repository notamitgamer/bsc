# algo_11

### Problem Statement

> Write an algorithm to reverse a linked list.

## Algorithm
```
procedure reverse(head)
begin 
    q ← r ← NULL;
    while(head ≠ NULL)
        r ← q;
        q ← head;
        head ← next(head);
        next(q) ← r;
    end while
    head ← q;
    return(head);
end procedure
```