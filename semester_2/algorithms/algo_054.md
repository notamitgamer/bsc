# algo_054

### Problem Statement

> Write a non-recursive algorithm to find the minimum element from a Binary Search Tree (BST).

## Algorithm
```
procedure findMin(T)
begin
    ptr ← T;
    if (ptr = NULL) then
        return -1;
    else
        while (LC(ptr) ≠ NULL) do
            ptr ← LC(ptr);
        endwhile
        return INFO(ptr);
    endif
end procedure
```
