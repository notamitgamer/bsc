# algo_111

### Problem Statement

> Write an algorithm to reverse a given string using a Stack.

## Algorithm
```
procedure ReverseStringUsingStack(STR)
begin
    CreateEmptyStack(S)
    N ← length(STR)

    for I ← 0 to N - 1 do
        Push(S, STR[I])
    endfor

    for I ← 0 to N - 1 do
        STR[I] ← Pop(S)
    endfor
end procedure
```