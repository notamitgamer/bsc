# algo_019

### Problem Statement

> Write an algorithm to count the number of nodes in circular list.

## Algorithm
```
procedure count(cl)
begin
    count ← 0;
    if(cl)
        ptr ← next(cl);
        do 
            count ← count + 1;
            ptr ← next(ptr);
        while (ptr ≠ next(cl));
    endif
    return(count);
end procedure
```