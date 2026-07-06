# algo_020

### Problem Statement

> Write an algorithm to search an element on a circular linked list.

## Algorithm
```
procedure search(cl, key)
begin
    found ← 0;
    if(cl)
        ptr ← next(cl);
        do
            if(key = info(ptr))
                found ← 1;
                break;
            endif
            ptr ← next(ptr);
        while(ptr ≠ next(cl));
    endif
    return(found);
end procedure
```