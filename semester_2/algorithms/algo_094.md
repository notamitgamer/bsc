# algo_094

### Problem Statement

> Write an algorithm to implement a Diagonal Matrix using a one-dimensional array and add two diagonal matrices.

## Algorithm
```
procedure StoreDiagonal(A, N)
begin
    for I ← 0 to N - 1 do
        for J ← 0 to N - 1 do
            read(VAL)
            if I = J then
                A[I] ← VAL
            endif
        endfor
    endfor
end procedure

procedure AddDiagonal(A, B, C, N)
begin
    for I ← 0 to N - 1 do
        C[I] ← A[I] + B[I]
    endfor
end procedure

procedure DisplayDiagonal(C, N)
begin
    for I ← 0 to N - 1 do
        for J ← 0 to N - 1 do
            if I = J then
                print(C[I])
            else
                print(0)
            endif
        endfor
    endfor
end procedure
```