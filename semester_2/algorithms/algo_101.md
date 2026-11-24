# algo_101

### Problem Statement

> Write an algorithm to evaluate a postfix expression using a stack.

## Algorithm
```
procedure EvaluatePostfix(POSTFIX)
begin
    CreateEmptyStack(S)

    for I ← 0 to length(POSTFIX) - 1 do
        CH ← POSTFIX[I]

        if IsDigit(CH) then
            Push(S, NumericValue(CH))
        else
            OP2 ← Pop(S)
            OP1 ← Pop(S)
            RES ← ApplyOperator(OP1, OP2, CH)
            Push(S, RES)
        endif
    endfor

    return(Pop(S))
end procedure
```