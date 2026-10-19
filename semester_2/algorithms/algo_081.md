# algo_081

### Problem Statement

> Write an algorithm to find the N-th Fibonacci number using recursion.

## Algorithm
```
procedure Fibonacci(N)
begin
    if N < 0 then
        print("Invalid input")
        return(-1)
    endif
    
    if N = 0 then
        return(0)
    endif
    
    if N = 1 then
        return(1)
    endif
    
    return(Fibonacci(N - 1) + Fibonacci(N - 2))
end procedure
```
