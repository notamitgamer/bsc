# algo_106

### Problem Statement

> Write an algorithm to sort a list of elements using Heap Sort.

## Algorithm
```
procedure Heapify(ARR, N, I)
begin
    LARGEST ← I
    LEFT ← 2 * I + 1
    RIGHT ← 2 * I + 2

    if LEFT < N and ARR[LEFT] > ARR[LARGEST] then
        LARGEST ← LEFT
    endif

    if RIGHT < N and ARR[RIGHT] > ARR[LARGEST] then
        LARGEST ← RIGHT
    endif

    if LARGEST != I then
        Swap(ARR[I], ARR[LARGEST])
        Heapify(ARR, N, LARGEST)
    endif
end procedure

procedure HeapSort(ARR, N)
begin
    for I ← (N div 2) - 1 down to 0 do
        Heapify(ARR, N, I)
    endfor

    for I ← N - 1 down to 1 do
        Swap(ARR[0], ARR[I])
        Heapify(ARR, I, 0)
    endfor
end procedure
```