# algo_026

### Problem Statement

> Write an algorithm to check if the stack is full or not.

## Algorithm
```
procedure isFull(top, n)
begin
    /* n represents stack size,
       having index 0 to n-1 and 'top' is an index variable. */ 

    if(top = n - 1)
        return true;
    else 
        return false;
    endif
end procedure
```