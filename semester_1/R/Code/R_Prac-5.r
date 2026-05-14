# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to count the number of even numbers stored inside a vector of numbers.

print("Enter your numbers: ")
nums <- as.integer(scan())
count = 0
for(i in nums)  {
    if(i %% 2 == 0) {
        count = count + 1
    }
}
print(paste("Even Count=", count))