# algo_092

### Problem Statement

> Write an algorithm using recursion to display the Fibonacci series up to n terms.

## Algorithm
```
procedure Fib(N)
begin
    if N <= 1 then
        return(N)
    endif
    return(Fib(N - 1) + Fib(N - 2))
end procedure

procedure PrintFibonacciSeries(COUNT)
begin
    for I ← 0 to COUNT - 1 do
        print(Fib(I))
    endfor
end procedure
```