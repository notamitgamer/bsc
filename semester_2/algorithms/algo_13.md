# algo_13

### Problem Statement

> Write an algorithm to print the elements of a singly linked list in reverse order.

## Algorithm
```
procedure reversePrint(head)
begin   
    ptr ← head;
    stack ← createArray(10);
    i ← 0;
    while(ptr ≠ NULL)
        stack[i] ← info(ptr);
        i ← i + 1;
        ptr ← next(ptr);
    end while
    write("Elements in reverse order: ");
    while(i ≥ 0)
        write(stack[i]);
        i ← i - 1;
    end while
end procedure
```