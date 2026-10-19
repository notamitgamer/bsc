# algo_085

### Problem Statement

> Write an algorithm for non-recursive postorder traversal of a binary tree (using two stacks).

## Algorithm
```
procedure NonRecursivePostorder(root)
begin
    if root = NULL then
        return()
    endif
    
    push(S1, root)
    
    while S1 is not empty do
        ptr ← pop(S1)
        push(S2, ptr)
        
        if left_child(ptr) != NULL then
            push(S1, left_child(ptr))
        endif
        
        if right_child(ptr) != NULL then
            push(S1, right_child(ptr))
        endif
    endwhile
    
    while S2 is not empty do
        ptr ← pop(S2)
        print(info(ptr))
    endwhile
end procedure
```
