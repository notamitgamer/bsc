# algo_10

### Problem Statement

> Write an algorithm to insert an element at a perticular position.

## Algorithm
```
procedure insertPosition(head, pos, val)
begin
    newNode ← getNode();
    info(newNode) ← val;
    next(newNode) ← NULL;
    if(pos < 1) 
        write("Invalid Input.");
    else if(pos = 1)
        next(newNode) ← head;
        head ← newNode;
    else
        current ← head;
        for(i ← 1; i < pos && current ≠ NULL; i ← i + 1)
            current ← next(current);
        end for
        if(current = NULL)
            write("Invalid  Input.");
        else
            next(newNode) ← next(current);
            next(current) ← newNode;
        endif
    endif
    return(head);
end procedure
```