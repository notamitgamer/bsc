# algo_057

### Problem Statement

> Write a recursive algorithm to search an element in a Binary Search Tree (BST).

## Algorithm
```
procedure search(T, key)
begin
    if (T = NULL or INFO(T) = key) then
        return T;
    else if (key < INFO(T)) then
        return search(LC(T), key);
    else
        return search(RC(T), key);
    endif
end procedure
```
