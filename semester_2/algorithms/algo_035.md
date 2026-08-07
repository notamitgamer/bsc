# algo_035

### Problem Statement

> Write an algorithm to dequeue.

## Algorithm
```
procedure dequeue(Q[], front, rear)
begin
    if(front = -1 || front > rear)
        write("Queue empty, deletion can't be performed.");
    else
        val ← Q[front];
        write("Deleted element", val);
        front ← front + 1;
        if(front > rear)
            front ← -1;
            rear ← -1;
        endif 
    endif
end procedure
```