# algo_09

### Problem Statement

> Write an algorithm to insert a node after a special key value.

## Algorithm
```
procedure insertAfterKey(head, key)
begin
    current ← head;
    while(current ≠ NULL && info(current) ≠ key)
        current ← next(current);
    endwhile
    if(current ≠ NULL)
        write("Enter the value: ");
        read(val);
        newNode ← getnode();
        info(newNode) ← val;
        next(newNode) ← next(current);
        next(current) ← newNode;
    else
        write("Key not found in the list.");
    endif
end procedure
```