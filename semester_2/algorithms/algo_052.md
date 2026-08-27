# algo_052

### Problem Statement

> Write an algorithm to insert a node (an element) into a Binary Search Tree (BST).

## Algorithm
```
procedure insert_BST(root, val)
begin
    nptr ← getNode();
    INFO(nptr) ← val;
    LC(nptr) ← NULL;
    RC(nptr) ← NULL;
    if (root = NULL) then
        root ← nptr;
        return(root);
    endif
    ptr ← root;
    parent ← NULL;
    while (ptr ≠ NULL) do
        parent ← ptr;
        if (val < INFO(ptr)) then
            ptr ← LC(ptr);
        else if (val > INFO(ptr)) then
            ptr ← RC(ptr);
        else
            write("Duplicate value not allowed");
            delete(nptr);
            return(root);
        endif
    endwhile
    if (val < INFO(parent)) then
        LC(parent) ← nptr;
    else
        RC(parent) ← nptr;
    endif
    return(root);
end procedure
```
