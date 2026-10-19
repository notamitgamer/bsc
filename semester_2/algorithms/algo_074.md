# algo_074

### Problem Statement

> Write an algorithm to delete a node at a given position in a singly linked list.

## Algorithm
```
procedure DeleteNodeAtPosition(head, POS)
begin
    if head = NULL then
        print("List is empty / Underflow")
        return(NULL)
    endif
    
    if POS = 1 then
        temp ← head
        head ← next(head)
        return(head)
    endif
    
    ptr ← head
    for i ← 1 to POS - 2 do
        if ptr = NULL then
            print("Invalid position")
            return(head)
        endif
        ptr ← next(ptr)
    endfor
    
    if ptr = NULL or next(ptr) = NULL then
        print("Invalid position")
        return(head)
    endif
    
    temp ← next(ptr)
    next(ptr) ← next(temp)
    
    return(head)
end procedure
```
