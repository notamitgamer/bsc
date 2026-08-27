# algo_049

### Problem Statement

> Write an algorithm to count the total number of nodes in a binary tree.

## Algorithm
```
procedure countNode(T)
begin
    if (T = NULL) then
        return 0;
    else
        return 1 + countNode(LC(T)) + countNode(RC(T));
    endif
end procedure
```
