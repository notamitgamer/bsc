# algo_059

### Problem Statement

> Write an algorithm to find the inorder successor of a node in a Binary Search Tree (BST).

## Algorithm
```
procedure inorderSuccessor(ptr)
begin
    /* Finds the leftmost node of the right subtree */
    p ← RC(ptr);
    while (LC(p) ≠ NULL) do
        p ← LC(p);
    endwhile
    return p;
end procedure
```
