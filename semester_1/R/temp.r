s1 = rep(c(1,2,3,4,5), times=2)
s2 = c(5,4,3,2,1)
count = 0
for(i in s1) {
    for (j in s2) {
        if((i+j) %% 2 == 0) {
            count = count + 1
            print(sprintf("%d, %d, %d", i, j, count))
            print(length(s1))
        }
    }
}
2^3