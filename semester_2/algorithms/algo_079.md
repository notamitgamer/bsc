# algo_079

### Problem Statement

> Write an algorithm to reverse a stack using an additional stack.

## Algorithm
```
procedure ReverseStack(S1, S2, N)
begin
    for i ← 1 to N do
        temp ← pop(S1)
        
        // Move remaining elements to S2
        for j ← 1 to N - i do
            push(S2, pop(S1))
        endfor
        
        // Place the extracted element at the bottom of the current sequence
        push(S1, temp)
        
        // Move elements back from S2 to S1
        while S2 is not empty do
            push(S1, pop(S2))
        endwhile
    endfor
end procedure
```
