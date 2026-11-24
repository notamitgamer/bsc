# algo_103

### Problem Statement

> Write an algorithm to perform Queue operations using a Circular Array implementation.

## Algorithm
```
procedure CircularEnqueue(Q, MAX, FRONT, REAR, VAL)
begin
    if (REAR + 1) mod MAX = FRONT then
        print("Queue Overflow")
        return()
    endif

    if FRONT = -1 then
        FRONT ← 0
    endif

    REAR ← (REAR + 1) mod MAX
    Q[REAR] ← VAL
end procedure

procedure CircularDequeue(Q, MAX, FRONT, REAR)
begin
    if FRONT = -1 then
        print("Queue Underflow")
        return()
    endif

    VAL ← Q[FRONT]

    if FRONT = REAR then
        FRONT ← -1
        REAR ← -1
    else
        FRONT ← (FRONT + 1) mod MAX
    endif

    return(VAL)
end procedure
```