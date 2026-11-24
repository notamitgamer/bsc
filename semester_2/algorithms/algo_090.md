# algo_090

### Problem Statement

> Write an algorithm using recursion: (i) to find the sum of first n natural numbers, and (ii) to compute the factors of a given number.

## Algorithm
```
procedure SumNatural(N)
begin
    if N <= 1 then
        return(N)
    endif
    return(N + SumNatural(N - 1))
end procedure

procedure PrintFactors(NUM, I)
begin
    if I > NUM then
        return()
    endif
    if NUM mod I = 0 then
        print(I)
    endif
    PrintFactors(NUM, I + 1)
end procedure
```