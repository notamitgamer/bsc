# algo_051

### Problem Statement

> Write an algorithm to count the number of leaf nodes in a binary tree.

## Algorithm
```
procedure countLeaf(T)
begin
    if (T = NULL) then
        return 0;
    else if (LC(T) = NULL and RC(T) = NULL) then
        return 1;
    else
        return countLeaf(LC(T)) + countLeaf(RC(T));
    endif
end procedure
```
