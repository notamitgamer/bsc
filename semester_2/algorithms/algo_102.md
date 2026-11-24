# algo_102

### Problem Statement

> Write an algorithm to reverse the order of elements in a stack using an additional stack.

## Algorithm
```
procedure ReverseStack(S1, S2)
begin
    CreateEmptyStack(S2)

    while not IsEmpty(S1) do
        VAL ← Pop(S1)
        Push(S2, VAL)
    endwhile
end procedure
```