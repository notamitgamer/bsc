# algo_044

### Problem Statement

> Write a non-recursive algorithm for inorder traversal of a binary tree.

## Algorithm
```
procedure inorder(T)
begin
    ptr ← T;
    flag ← 1;
    while (flag) do
        while (ptr ≠ NULL) do
            push(stack, ptr);
            ptr ← LC(ptr);
        endwhile
        if (!isEmpty(stack)) then
            ptr ← pop(stack);
            write(INFO(ptr));
            ptr ← RC(ptr);
        else
            flag ← 0;
        endif
    endwhile
end procedure
```
