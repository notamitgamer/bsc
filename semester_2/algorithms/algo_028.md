# algo_028

### Problem Statement

> Write an algorithm to push a element to stack.

## Algorithm
```
procedure push(stack[], top, n, val)
begin
    if(top = n - 1)
        write("Stack full, insertion not possible.");
    else
        top ← top + 1;
        stack[top] ← val;
    endif
end procedure
```