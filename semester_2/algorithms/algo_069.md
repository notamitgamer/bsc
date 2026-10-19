# algo_069

### Problem Statement

> Write an algorithm to evaluate a postfix expression.

## Algorithm
```
procedure EvaluatePostfix(POSTFIX)
begin
    Add a special end-marker to POSTFIX
    i ← 1
    
    while POSTFIX[i] != end-marker do
        token ← POSTFIX[i]
        
        if token is an operand then
            push(Stack, token)
        else if token is an operator then
            A ← pop(Stack)
            B ← pop(Stack)
            result ← evaluate(B, token, A)
            push(Stack, result)
        endif
        
        i ← i + 1
    endwhile
    
    final_val ← pop(Stack)
    return(final_val)
end procedure
```
