# algo_113

### Problem Statement

> Write an algorithm to check whether two Binary Search Trees (BSTs) are identical (equal) or not.

## Algorithm
```
procedure AreTreesIdentical(ROOT1, ROOT2)
begin
    if ROOT1 = NULL and ROOT2 = NULL then
        return(TRUE)
    endif

    if ROOT1 = NULL or ROOT2 = NULL then
        return(FALSE)
    endif

    if info(ROOT1) = info(ROOT2) then
        LEFT_EQ ← AreTreesIdentical(left(ROOT1), left(ROOT2))
        RIGHT_EQ ← AreTreesIdentical(right(ROOT1), right(ROOT2))
        return(LEFT_EQ and RIGHT_EQ)
    else
        return(FALSE)
    endif
end procedure
```