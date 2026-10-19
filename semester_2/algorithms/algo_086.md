# algo_086

### Problem Statement

> Write an algorithm to find the height of a binary tree.

## Algorithm
```
procedure TreeHeight(root)
begin
    if root = NULL then
        return(0)
    endif
    
    left_height ← TreeHeight(left_child(root))
    right_height ← TreeHeight(right_child(root))
    
    if left_height > right_height then
        return(left_height + 1)
    else
        return(right_height + 1)
    endif
end procedure
```
