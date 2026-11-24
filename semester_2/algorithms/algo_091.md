# algo_091

### Problem Statement

> Write an algorithm using recursion to calculate the GCD of two numbers.

## Algorithm
```
procedure GCD(A, B)
begin
    if B = 0 then
        return(A)
    endif
    return(GCD(B, A mod B))
end procedure
```