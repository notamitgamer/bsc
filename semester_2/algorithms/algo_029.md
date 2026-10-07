# algo_029

### Problem Statement

> Write an algorithm to pop a element from stack.

## Algorithm
```
Procedure pop(stack[], top)
begin
    if (top = -1) then
        write("Stack is empty, deletion not possible.");
        return NULL;
    else
        x ← stack[top];
        top ← top - 1;
        return x;
    endif
end procedure
```
