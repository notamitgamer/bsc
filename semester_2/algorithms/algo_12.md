# algo_12

### Problem Statement

> Write an algorithm which remores the first element of a list and adds it to the end of the list without changing any values in INFO part.

## Algorithm
```
procedure ding(head)
begin 
    ptr ← head;
    ptr2 ← head;
    head ← next(head);
    next(ptr) ← NULL;
    while(next(ptr2) ≠ NULL)
        ptr2 ← next(ptr2);
    end while
    next(ptr2) ← ptr;
    return(head);
end procedure

----------------------------

procedure dong(head)
begin
    ptr ← head;
    while(next(ptr) ≠ NULL)
        ptr ← next(ptr);
    end while
    next(ptr) ← head;
    p ← next(head);
    next(head) ← NULL;
    head ← p;
    return(head);
end procedure
```