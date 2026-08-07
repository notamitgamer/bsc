# algo_034

### Problem Statement

> Write an algorithm to enqueue.

## Algorithm
```
procedure enqueue(rear, MAX, front, Q[], val)
begin
    if(rear = MAX - 1)
        write("Queue full, insertion can't be done.");
    else
        if(front = -1)
            front ← 0;
        endif 
        rear ← rear + 1;
        Q[rear] ← val;
        write("Inserted element", val);
    endif
end procedure
```