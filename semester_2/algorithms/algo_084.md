# algo_084

### Problem Statement

> Write an algorithm to perform a level-order traversal of a binary tree using a queue.

## Algorithm
```
procedure LevelOrderTraversal(root)
begin
    if root = NULL then
        print("Tree is empty")
        return()
    endif
    
    enqueue(Queue, root)
    
    while Queue is not empty do
        ptr ← dequeue(Queue)
        print(info(ptr))
        
        if left_child(ptr) != NULL then
            enqueue(Queue, left_child(ptr))
        endif
        
        if right_child(ptr) != NULL then
            enqueue(Queue, right_child(ptr))
        endif
    endwhile
end procedure
```
