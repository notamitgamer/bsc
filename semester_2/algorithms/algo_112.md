# algo_112

### Problem Statement

> Write an algorithm to perform Stack operations (Push and Pop) using a Linked List implementation.

## Algorithm
```
procedure PushLinkedStack(TOP, VAL)
begin
    newNode ← get_node()
    if newNode = NULL then
        print("Stack Overflow")
        return()
    endif

    info(newNode) ← VAL
    next(newNode) ← TOP
    TOP ← newNode
end procedure

procedure PopLinkedStack(TOP)
begin
    if TOP = NULL then
        print("Stack Underflow")
        return()
    endif

    TEMP ← TOP
    VAL ← info(TEMP)
    TOP ← next(TOP)
    free(TEMP)
    return(VAL)
end procedure
```