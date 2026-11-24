# algo_097

### Problem Statement

> Write an algorithm to reverse a Singly Linked List and concatenate two linked lists.

## Algorithm
```
procedure ReverseSinglyList(HEAD)
begin
    PREV ← NULL
    CURR ← HEAD
    NEXTNODE ← NULL

    while CURR != NULL do
        NEXTNODE ← next(CURR)
        next(CURR) ← PREV
        PREV ← CURR
        CURR ← NEXTNODE
    endwhile

    HEAD ← PREV
end procedure

procedure ConcatenateLists(HEAD1, HEAD2)
begin
    if HEAD1 = NULL then
        HEAD1 ← HEAD2
        return()
    endif

    PTR ← HEAD1
    while next(PTR) != NULL do
        PTR ← next(PTR)
    endwhile

    next(PTR) ← HEAD2
end procedure
```