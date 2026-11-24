# algo_098

### Problem Statement

> Write an algorithm to implement a Circular Linked List including insertion, deletion, and reversal.

## Algorithm
```
procedure InsertCircularEnd(HEAD, VAL)
begin
    newNode ← get_node()
    info(newNode) ← VAL

    if HEAD = NULL then
        HEAD ← newNode
        next(newNode) ← HEAD
    else
        PTR ← HEAD
        while next(PTR) != HEAD do
            PTR ← next(PTR)
        endwhile
        next(PTR) ← newNode
        next(newNode) ← HEAD
    endif
end procedure

procedure DeleteCircularFront(HEAD)
begin
    if HEAD = NULL then
        print("List is empty")
        return()
    endif

    if next(HEAD) = HEAD then
        free(HEAD)
        HEAD ← NULL
        return()
    endif

    LAST ← HEAD
    while next(LAST) != HEAD do
        LAST ← next(LAST)
    endwhile

    TEMP ← HEAD
    HEAD ← next(HEAD)
    next(LAST) ← HEAD
    free(TEMP)
end procedure

procedure ReverseCircularList(HEAD)
begin
    if HEAD = NULL or next(HEAD) = HEAD then
        return()
    endif

    PREV ← NULL
    CURR ← HEAD
    NEXTNODE ← NULL

    repeat
        NEXTNODE ← next(CURR)
        next(CURR) ← PREV
        PREV ← CURR
        CURR ← NEXTNODE
    until CURR = HEAD

    next(HEAD) ← PREV
    HEAD ← PREV
end procedure
```