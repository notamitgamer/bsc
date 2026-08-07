# algo_037

### Problem Statement

> Write an algorithm to check if the queue is full (Circular queue)

## Algorithm
```
procedure ifFull(rear, Qsize, front)
begin
    if((rear + 1) % Qsize = front)
        return true;
    else   
        return false;
    endif
end procedure
```