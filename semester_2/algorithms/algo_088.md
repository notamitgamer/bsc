# algo_088

### Problem Statement

> Write an algorithm to insert an element into a hash table using linear probing.

## Algorithm
```
procedure InsertLinearProbing(HT, SIZE, KEY)
begin
    index ← KEY mod SIZE
    start_index ← index
    
    while HT[index] is not empty do
        if HT[index] = KEY then
            print("Duplicate key")
            return()
        endif
        
        index ← (index + 1) mod SIZE
        
        if index = start_index then
            print("Hash table is full")
            return()
        endif
    endwhile
    
    HT[index] ← KEY
end procedure
```
