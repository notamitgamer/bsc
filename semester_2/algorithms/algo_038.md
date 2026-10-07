# algo_038

### Problem Statement

> Write an algorithm to enqueue (circular queue)

## Algorithm
```
Procedure enqueue(Q[], front, rear, Qsize, val)
begin
    if ((rear + 1) % Qsize = front) then
        write("Queue full, insertion can't be done.");
    else
        if (front = -1) then
            front ← 0;
            rear ← 0;
        else
            rear ← (rear + 1) % Qsize;
        endif

        Q[rear] ← val;
        write("Inserted element: ", val);
    endif
end procedure
```
