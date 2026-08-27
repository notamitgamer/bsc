# algo_050

### Problem Statement

> Write an algorithm to count the number of internal nodes in a binary tree.

## Algorithm
```
procedure countInternal(T)
begin
    if (T = NULL) then
        return 0;
    else if (LC(T) = NULL and RC(T) = NULL) then
        return 0;
    else
        return 1 + countInternal(LC(T)) + countInternal(RC(T));
    endif
end procedure
```
