# algo_061

### Problem Statement

> Write an algorithm for finding the inorder successor helper node (`ins`) used in BST node deletion.

## Algorithm
```
procedure ins(root)
begin
    ptr ← RC(root);
    while (LC(ptr) ≠ NULL) do
        ptr ← LC(ptr);
    endwhile
    return ptr;
end procedure
```
