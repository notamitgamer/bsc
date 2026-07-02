# algo_17

### Problem Statement

> Write an algorithm to merge two sorted circular linked list.

## Algorithm
```
procedure merge(cl1, cl2)
begin
    if(cl1 = NULL && cl2 = NULL) 
        return(cl1);
    else if(cl1 ≠ NULL && cl2 = NULL) 
        return(cl1);
    else if(cl1 = NULL && cl2 ≠ NULL) 
        return(cl2);
    else 
        ptr ← next(cl2);
        next(cl2) ← next(cl1);
        next(cl1) ← ptr;
        return(cl2);
    endif
end procedure
```