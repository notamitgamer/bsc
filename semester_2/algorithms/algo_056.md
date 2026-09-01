# algo_056

### Problem Statement

> Write a non-recursive algorithm to find the maximum element from a Binary Search Tree (BST).

## Algorithm
```
procedure findMax(T)
begin
    ptr ← T;
    if (ptr = NULL) then
        return -1;
    else
        while (RC(ptr) ≠ NULL) do
            ptr ← RC(ptr);
        endwhile
        return INFO(ptr);
    endif
end procedure
```
