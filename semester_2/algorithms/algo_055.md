# algo_055

### Problem Statement

> Write a recursive algorithm to find the maximum element from a Binary Search Tree (BST).

## Algorithm
```
procedure findMax(T)
begin
    if (T = NULL or RC(T) = NULL) then
        return T;
    else
        return findMax(RC(T));
    endif
end procedure
```
