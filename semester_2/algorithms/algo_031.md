# algo_031

### Problem Statement

> Write an algorithm to pop to stack (Linked representation of stack)

## Algorithm
```
procedure  pop(stack, val)
begin
	if(stack = NULL) 
		write("Empty");
	else
		ptr ← stack;
		stack ← next(ptr);
        delete(ptr);
        return(stack);
    endif
end procedure
```