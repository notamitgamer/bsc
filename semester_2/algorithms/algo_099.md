# algo_099

### Problem Statement

> Write an algorithm to implement a Doubly Linked List including insertion, deletion, and reversal.

## Algorithm
```
procedure InsertDoublyEnd(HEAD, VAL)
begin
    newNode ← get_node()
    info(newNode) ← VAL
    next(newNode) ← NULL

    if HEAD = NULL then
        prev(newNode) ← NULL
        HEAD ← newNode
    else
        PTR ← HEAD
        while next(PTR) != NULL do
            PTR ← next(PTR)
        endwhile
        next(PTR) ← newNode
        prev(newNode) ← PTR
    endif
end procedure

procedure DeleteDoublyEnd(HEAD)
begin
    if HEAD = NULL then
        print("List is empty")
        return()
    endif

    if next(HEAD) = NULL then
        free(HEAD)
        HEAD ← NULL
        return()
    endif

    PTR ← HEAD
    while next(PTR) != NULL do
        PTR ← next(PTR)
    endwhile

    next(prev(PTR)) ← NULL
    free(PTR)
end procedure

procedure ReverseDoublyList(HEAD)
begin
    TEMP ← NULL
    CURR ← HEAD

    while CURR != NULL do
        TEMP ← prev(CURR)
        prev(CURR) ← next(CURR)
        next(CURR) ← TEMP
        CURR ← prev(CURR)
    endwhile

    if TEMP != NULL then
        HEAD ← prev(TEMP)
    endif
end procedure
```