# algo_068

### Problem Statement

> Write an algorithm to convert an infix expression to a postfix expression using a stack.

## Algorithm
```
procedure InfixToPostfix(INFIX, POSTFIX)
begin
    push(Stack, '(')
    Add ')' to the end of INFIX
    i ← 1
    j ← 1
    
    while Stack is not empty do
        token ← INFIX[i]
        
        if token is an operand then
            POSTFIX[j] ← token
            j ← j + 1
        else if token = '(' then
            push(Stack, token)
        else if token is an operator then
            while precedence(top(Stack)) >= precedence(token) do
                POSTFIX[j] ← pop(Stack)
                j ← j + 1
            endwhile
            push(Stack, token)
        else if token = ')' then
            while top(Stack) != '(' do
                POSTFIX[j] ← pop(Stack)
                j ← j + 1
            endwhile
            pop(Stack) // Remove the '('
        endif
        
        i ← i + 1
    endwhile
end procedure
```
