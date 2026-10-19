# algo_089

### Problem Statement

> Write an algorithm to insert an element into a hash table using separate chaining.

## Algorithm
```
procedure InsertSeparateChaining(HT, SIZE, KEY)
begin
    index ← KEY mod SIZE
    
    newNode ← get_node()
    if newNode = NULL then
        print("Memory overflow")
        return()
    endif
    
    info(newNode) ← KEY
    next(newNode) ← NULL
    
    if HT[index] = NULL then
        HT[index] ← newNode
    else
        ptr ← HT[index]
        while next(ptr) != NULL do
            if info(ptr) = KEY then
                print("Duplicate key")
                return()
            endif
            ptr ← next(ptr)
        endwhile
        
        if info(ptr) = KEY then
            print("Duplicate key")
            return()
        endif
        
        next(ptr) ← newNode
    endif
end procedure
```
