# algo_062

### Problem Statement

> Write an algorithm to delete a node from a Binary Search Tree (BST).

## Algorithm
```
procedure deleteNode(root, key)
begin
    if (root = NULL) then
        return root;
    else if (key < INFO(root)) then
        LC(root) ← deleteNode(LC(root), key);
    else if (key > INFO(root)) then
        RC(root) ← deleteNode(RC(root), key);
    else
        if (LC(root) = NULL) then
            temp ← RC(root);
            free(root);
            return temp;
        else if (RC(root) = NULL) then
            temp ← LC(root);
            free(root);
            return temp;
        endif
        temp ← ins(root);
        INFO(root) ← INFO(temp);
        RC(root) ← deleteNode(RC(root), INFO(temp));
    endif
    return root;
end procedure
```
