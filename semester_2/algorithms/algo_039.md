# algo_039

### Problem Statement

> Write an algorithm to dequeue (circular queue)

## Algorithm
```
procedure dequeue(Q[], front, rear)
begin
    if(front = -1)
        write("Queue empty.");
    else
        rear ← Q[front];
        write("Deleted element: ", val);
      --------------------------------
      | front ← (front + 1) % Qsize; |
      | if(front > rear)             |   Vice Versa
      |     front ← -1;              |
      |     rear ← -1;               |
      --------------------------------    
        endif
    endif
end procedure
```