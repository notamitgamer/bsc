# algo_039

### Problem Statement

> Write an algorithm to dequeue (circular queue)

## Algorithm
```
Procedure dequeue(Q[], front, rear, Qsize)
begin
    if (front = -1) then
        write("Queue empty.")
    else
        val ← Q[front]                   
        write("Deleted element: ", val)

        // CORRECTED SECTION:
        if (front = rear) then           
            front ← -1
            rear ← -1
        else                             
            front ← (front + 1) % Qsize
        endif
    endif
end procedure

```
