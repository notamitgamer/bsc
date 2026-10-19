# algo_087

### Problem Statement

> Write an algorithm to create the mirror image of a binary tree.

## Algorithm
```
procedure MirrorImage(root)
begin
    if root = NULL then
        return()
    endif
    
    MirrorImage(left_child(root))
    MirrorImage(right_child(root))
    
    temp ← left_child(root)
    left_child(root) ← right_child(root)
    right_child(root) ← temp
end procedure
```
