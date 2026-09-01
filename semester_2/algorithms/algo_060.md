# algo_060

### Problem Statement

> Write an algorithm to check whether two given binary trees are identical or not.

## Algorithm
```
procedure identicalTree(T1, T2)
begin
    /* T1 and T2 hold the base addresses of the trees */
    if (T1 = NULL and T2 = NULL) then
        return true;
    endif
    if (T1 = NULL or T2 = NULL) then
        return false;
    else
        return ((INFO(T1) = INFO(T2)) and identicalTree(LC(T1), LC(T2)) and identicalTree(RC(T1), RC(T2)));
    endif
end procedure
```
