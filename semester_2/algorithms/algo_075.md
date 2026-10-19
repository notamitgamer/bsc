# algo_075

### Problem Statement

> Write an algorithm to concatenate two singly linked lists.

## Algorithm
```
procedure ConcatenateLists(head1, head2)
begin
    if head1 = NULL then
        return(head2)
    endif
    
    if head2 = NULL then
        return(head1)
    endif
    
    ptr ← head1
    while next(ptr) != NULL do
        ptr ← next(ptr)
    endwhile
    
    next(ptr) ← head2
    
    return(head1)
end procedure
```
