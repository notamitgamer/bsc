# algo_046

### Problem Statement

> Write a non-recursive algorithm for preorder traversal of a binary tree.

## Algorithm
```
procedure preorder(T)
begin
    ptr ← T;
    flag ← 1;
    while (flag = 1) do
        while (ptr ≠ NULL) do
            write(INFO(ptr));
            push(stack, ptr);
            ptr ← LC(ptr);
        endwhile
        if (!isEmpty(stack)) then
            ptr ← pop(stack);
            ptr ← RC(ptr);
        else
            flag ← 0;
        endif
    endwhile
end procedure
```
