# algo_100

### Problem Statement

> Write an algorithm to transform an infix expression into a postfix expression[cite: 2, 3].

## Algorithm
```
procedure InfixToPostfix(INFIX, POSTFIX)
begin
    CreateEmptyStack(S)
    J ← 0

    for I ← 0 to length(INFIX) - 1 do
        CH ← INFIX[I]

        if IsOperand(CH) then
            POSTFIX[J] ← CH
            J ← J + 1
        else if CH = '(' then
            Push(S, CH)
        else if CH = ')' then
            while not IsEmpty(S) and Top(S) != '(' do
                POSTFIX[J] ← Pop(S)
                J ← J + 1
            endwhile
            Pop(S)
        else
            while not IsEmpty(S) and Precedence(Top(S)) >= Precedence(CH) do
                POSTFIX[J] ← Pop(S)
                J ← J + 1
            endwhile
            Push(S, CH)
        endif
    endfor

    while not IsEmpty(S) do
        POSTFIX[J] ← Pop(S)
        J ← J + 1
    endwhile

    POSTFIX[J] ← '\0'
end procedure
```