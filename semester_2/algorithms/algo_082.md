# algo_082

### Problem Statement

> Write an algorithm to find the Greatest Common Divisor (GCD) of two numbers using recursion.

## Algorithm
```
procedure GCD(A, B)
begin
    if B = 0 then
        return(A)
    else
        return(GCD(B, A mod B))
    endif
end procedure
```
