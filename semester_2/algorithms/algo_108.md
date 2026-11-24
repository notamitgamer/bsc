# algo_108

### Problem Statement

> Write an algorithm to insert and delete a node in a Binary Search Tree (BST).

## Algorithm
```
procedure InsertBST(ROOT, KEY)
begin
    if ROOT = NULL then
        newNode ← get_node()
        info(newNode) ← KEY
        left(newNode) ← NULL
        right(newNode) ← NULL
        return(newNode)
    endif

    if KEY < info(ROOT) then
        left(ROOT) ← InsertBST(left(ROOT), KEY)
    else if KEY > info(ROOT) then
        right(ROOT) ← InsertBST(right(ROOT), KEY)
    endif

    return(ROOT)
end procedure

procedure DeleteBST(ROOT, KEY)
begin
    if ROOT = NULL then
        return(NULL)
    endif

    if KEY < info(ROOT) then
        left(ROOT) ← DeleteBST(left(ROOT), KEY)
    else if KEY > info(ROOT) then
        right(ROOT) ← DeleteBST(right(ROOT), KEY)
    else
        if left(ROOT) = NULL then
            TEMP ← right(ROOT)
            free(ROOT)
            return(TEMP)
        else if right(ROOT) = NULL then
            TEMP ← left(ROOT)
            free(ROOT)
            return(TEMP)
        endif

        SUCC ← right(ROOT)
        while left(SUCC) != NULL do
            SUCC ← left(SUCC)
        endwhile

        info(ROOT) ← info(SUCC)
        right(ROOT) ← DeleteBST(right(ROOT), info(SUCC))
    endif

    return(ROOT)
end procedure
```