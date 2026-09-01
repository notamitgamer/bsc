# algo_058

### Problem Statement

> Write a non-recursive algorithm to search an element in a Binary Search Tree (BST).

## Algorithm
```
procedure search(T, key)
begin
    while (T ≠ NULL) do
        if (INFO(T) = key) then
            return T;
        else if (key < INFO(T)) then
            T ← LC(T);
        else
            T ← RC(T);
        endif
    endwhile
    return NULL;
end procedure
```
