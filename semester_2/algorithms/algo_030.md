# algo_030

### Problem Statement

> Write an algorithm to push to stack (Linked representation of stack)

## Algorithm
```
Procedure push(stack, val)
begin
    ptr ← getNode();
    if (ptr = NULL) then
        write("Stack Overflow / Memory Allocation Failed");
        return(stack);
    endif

    INFO(ptr) ← val;
    next(ptr) ← stack;
    stack ← ptr;
    return(stack);
end procedure
```
