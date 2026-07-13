# algo_029

### Problem Statement

> Write an algorithm to pop a element from stack.

## Algorithm
```
procedure pop(stack[], top, n)
begin
    if(top = -1) 
        write("Stack is empty, deletion not possible.");
        return;
    else
        x ← stack[top];
        top ← top - 1;
        return x;
    endif;
end procedure
```