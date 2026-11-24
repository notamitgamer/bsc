# algo_105

### Problem Statement

> Write an algorithm to sort a list of elements using Quick Sort.

## Algorithm
```
procedure Partition(ARR, LOW, HIGH)
begin
    PIVOT ← ARR[HIGH]
    I ← LOW - 1

    for J ← LOW to HIGH - 1 do
        if ARR[J] < PIVOT then
            I ← I + 1
            Swap(ARR[I], ARR[J])
        endif
    endfor

    Swap(ARR[I + 1], ARR[HIGH])
    return(I + 1)
end procedure

procedure QuickSort(ARR, LOW, HIGH)
begin
    if LOW < HIGH then
        PI ← Partition(ARR, LOW, HIGH)
        QuickSort(ARR, LOW, PI - 1)
        QuickSort(ARR, PI + 1, HIGH)
    endif
end procedure
```