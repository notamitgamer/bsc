# algo_045

### Problem Statement

> Write a recursive algorithm for inorder traversal of a binary tree.

## Algorithm
```
procedure inorder(ptr)
begin
    if (ptr ≠ NULL) then
        inorder(LC(ptr));
        write(INFO(ptr));
        inorder(RC(ptr));
    endif
end procedure
```
