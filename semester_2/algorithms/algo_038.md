# algo_038

### Problem Statement

> Write an algorithm to enqueue (circular queue)

## Algorithm
```
procedure enqueue(rear, Qsize, front, Q[], val)
begin
    if((rear + 1) % Qsize = font)
        write("Queue full, insertion can't be done.");
    else
        if(front = -1)
            front ← 0;
        endif
        rear ← (rear + 1) % Qsize;
        Q[rear] ← val;
        write("Inserted element", val);
    endif
end procedure
```