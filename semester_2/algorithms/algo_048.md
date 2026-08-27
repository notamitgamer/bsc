# algo_048

### Problem Statement

> Write a recursive algorithm for postorder traversal of a binary tree.

## Algorithm
```
procedure postorder(ptr)
begin
    if (ptr ≠ NULL) then
        postorder(LC(ptr));
        postorder(RC(ptr));
        write(INFO(ptr));
    endif
end procedure
```
