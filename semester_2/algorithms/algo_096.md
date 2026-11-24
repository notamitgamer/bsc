# algo_096

### Problem Statement

> Write an algorithm to add two polynomials represented using a Linked List.

## Algorithm
```
procedure AddPolynomials(HEAD1, HEAD2, HEAD3)
begin
    P1 ← HEAD1
    P2 ← HEAD2
    HEAD3 ← NULL

    while P1 != NULL and P2 != NULL do
        newNode ← get_node()
        next(newNode) ← NULL

        if exp(P1) = exp(P2) then
            coeff(newNode) ← coeff(P1) + coeff(P2)
            exp(newNode) ← exp(P1)
            P1 ← next(P1)
            P2 ← next(P2)
        else if exp(P1) > exp(P2) then
            coeff(newNode) ← coeff(P1)
            exp(newNode) ← exp(P1)
            P1 ← next(P1)
        else
            coeff(newNode) ← coeff(P2)
            exp(newNode) ← exp(P2)
            P2 ← next(P2)
        endif

        AppendNode(HEAD3, newNode)
    endwhile

    while P1 != NULL do
        newNode ← get_node()
        coeff(newNode) ← coeff(P1)
        exp(newNode) ← exp(P1)
        next(newNode) ← NULL
        AppendNode(HEAD3, newNode)
        P1 ← next(P1)
    endwhile

    while P2 != NULL do
        newNode ← get_node()
        coeff(newNode) ← coeff(P2)
        exp(newNode) ← exp(P2)
        next(newNode) ← NULL
        AppendNode(HEAD3, newNode)
        P2 ← next(P2)
    endwhile
end procedure
```