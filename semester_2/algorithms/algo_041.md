# algo_041

### Problem Statement

> Write an algorithm to dequeue an element from a linear queue using linked representation.

## Algorithm
```
procedure dequeue(front, rear)
begin
    if (front = NULL and rear = NULL) then
        write("Queue empty, deletion not possible.");
    else if (front = rear) then
        delete(front);
        front ← NULL;
        rear ← NULL;
    else
        ptr ← front;
        front ← next(ptr);
        delete(ptr);
    endif
end procedure
```
