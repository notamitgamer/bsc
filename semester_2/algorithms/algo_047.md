# algo_047

### Problem Statement

> Write a recursive algorithm for preorder traversal of a binary tree.

## Algorithm
```
procedure preorder(ptr)
begin
    if (ptr ≠ NULL) then
        write(INFO(ptr));
        preorder(LC(ptr));
        preorder(RC(ptr));
    endif
end procedure
```
