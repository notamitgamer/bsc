# algo_031

### Problem Statement

> Write an algorithm to pop to stack (Linked representation of stack)

## Algorithm
```
Procedure pop(stack, val)
begin
    if (stack = NULL) then
        write("Stack Underflow");
        return(stack);
    else
        ptr ← stack;
        val ← INFO(ptr);
        stack ← next(ptr);
        delete(ptr);
        return(stack);
    endif
end procedure
```
