# algo_109

### Problem Statement

> Write an algorithm for recursive In-Order traversal, finding the height of a Binary Search Tree, and counting leaf and non-leaf nodes.

## Algorithm
```
procedure InOrderBST(ROOT)
begin
    if ROOT = NULL then
        return()
    endif
    InOrderBST(left(ROOT))
    print(info(ROOT))
    InOrderBST(right(ROOT))
end procedure

procedure HeightBST(ROOT)
begin
    if ROOT = NULL then
        return(0)
    endif
    LH ← HeightBST(left(ROOT))
    RH ← HeightBST(right(ROOT))
    return(1 + Max(LH, RH))
end procedure

procedure CountLeafNodes(ROOT)
begin
    if ROOT = NULL then
        return(0)
    endif
    if left(ROOT) = NULL and right(ROOT) = NULL then
        return(1)
    endif
    return(CountLeafNodes(left(ROOT)) + CountLeafNodes(right(ROOT)))
end procedure

procedure CountNonLeafNodes(ROOT)
begin
    if ROOT = NULL or (left(ROOT) = NULL and right(ROOT) = NULL) then
        return(0)
    endif
    return(1 + CountNonLeafNodes(left(ROOT)) + CountNonLeafNodes(right(ROOT)))
end procedure
```