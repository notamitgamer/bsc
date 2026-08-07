# algo_030

### Problem Statement

> Write an algorithm to push to stack (Linked representation of stack)

## Algorithm
```
procedure push(Stack, val)
begin 
    ptr ← getNode();
    info(ptr) ← val;
    next(ptr) ← stack;
    stack ← ptr;
    return(stack);
end procedure
```