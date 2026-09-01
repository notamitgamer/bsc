# algo_053

### Problem Statement

> Write a recursive algorithm to find the minimum element from a Binary Search Tree (BST).

## Algorithm
```
procedure findMinBST(T)
begin
    if (T = NULL or LC(T) = NULL) then
        return T;
    else
        return findMinBST(LC(T));
    endif
end procedure
```
