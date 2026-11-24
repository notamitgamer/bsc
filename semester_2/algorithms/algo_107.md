# algo_107

### Problem Statement

> Write an algorithm to sort a list of elements using Bubble Sort, Selection Sort, and Insertion Sort.

## Algorithm
```
procedure BubbleSort(ARR, N)
begin
    for I ← 0 to N - 2 do
        for J ← 0 to N - I - 2 do
            if ARR[J] > ARR[J + 1] then
                Swap(ARR[J], ARR[J + 1])
            endif
        endfor
    endfor
end procedure

procedure SelectionSort(ARR, N)
begin
    for I ← 0 to N - 2 do
        MIN_IDX ← I
        for J ← I + 1 to N - 1 do
            if ARR[J] < ARR[MIN_IDX] then
                MIN_IDX ← J
            endif
        endfor
        if MIN_IDX != I then
            Swap(ARR[I], ARR[MIN_IDX])
        endif
    endfor
end procedure

procedure InsertionSort(ARR, N)
begin
    for I ← 1 to N - 1 do
        KEY ← ARR[I]
        J ← I - 1
        while J >= 0 and ARR[J] > KEY do
            ARR[J + 1] ← ARR[J]
            J ← J - 1
        endwhile
        ARR[J + 1] ← KEY
    endfor
end procedure
```