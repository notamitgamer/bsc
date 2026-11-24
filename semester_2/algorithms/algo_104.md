# algo_104

### Problem Statement

> Write an algorithm to implement a Stack using two Queues.

## Algorithm
```
procedure StackPushUsingQueues(Q1, Q2, VAL)
begin
    Enqueue(Q2, VAL)

    while not IsEmpty(Q1) do
        TEMP ← Dequeue(Q1)
        Enqueue(Q2, TEMP)
    endwhile

    Swap(Q1, Q2)
end procedure

procedure StackPopUsingQueues(Q1)
begin
    if IsEmpty(Q1) then
        print("Stack Underflow")
        return()
    endif

    return(Dequeue(Q1))
end procedure
```