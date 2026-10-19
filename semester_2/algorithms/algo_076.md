# algo_076

### Problem Statement

> Write an algorithm to add two polynomials using linked lists.

## Algorithm
```
procedure AddPolynomials(poly1, poly2)
begin
    result ← NULL
    tail ← NULL
    
    while poly1 != NULL and poly2 != NULL do
        newNode ← get_node()
        if exp(poly1) = exp(poly2) then
            coeff(newNode) ← coeff(poly1) + coeff(poly2)
            exp(newNode) ← exp(poly1)
            poly1 ← next(poly1)
            poly2 ← next(poly2)
        else if exp(poly1) > exp(poly2) then
            coeff(newNode) ← coeff(poly1)
            exp(newNode) ← exp(poly1)
            poly1 ← next(poly1)
        else
            coeff(newNode) ← coeff(poly2)
            exp(newNode) ← exp(poly2)
            poly2 ← next(poly2)
        endif
        
        next(newNode) ← NULL
        if result = NULL then
            result ← newNode
            tail ← newNode
        else
            next(tail) ← newNode
            tail ← newNode
        endif
    endwhile
    
    ptr ← poly1
    if poly1 = NULL then
        ptr ← poly2
    endif
    
    while ptr != NULL do
        newNode ← get_node()
        coeff(newNode) ← coeff(ptr)
        exp(newNode) ← exp(ptr)
        next(newNode) ← NULL
        
        if result = NULL then
            result ← newNode
        else
            next(tail) ← newNode
        endif
        tail ← newNode
        ptr ← next(ptr)
    endwhile
    
    return(result)
end procedure
```
