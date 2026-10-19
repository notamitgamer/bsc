# algo_083

### Problem Statement

> Write an algorithm to solve the Tower of Hanoi problem.

## Algorithm
```
procedure TowerOfHanoi(N, SOURCE, DEST, AUX)
begin
    if N = 1 then
        print("Move disk 1 from", SOURCE, "to", DEST)
        return()
    endif
    
    TowerOfHanoi(N - 1, SOURCE, AUX, DEST)
    print("Move disk", N, "from", SOURCE, "to", DEST)
    TowerOfHanoi(N - 1, AUX, DEST, SOURCE)
end procedure
```
