# algo_080

### Problem Statement

> Write an algorithm to find the factorial of a number using recursion.

## Algorithm
```
procedure Factorial(N)
begin
    if N < 0 then
        print("Invalid input")
        return(-1)
    endif
    
    if N = 0 or N = 1 then
        return(1)
    else
        return(N * Factorial(N - 1))
    endif
end procedure
```
