# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a while loop that starts with a multiplier of 1. 
# The loop should multiply the current multiplier by 4, 
# assign it to a result variable, and print the result. 
# The loop should exit if the result exceeds 100; otherwise, 
# increment the multiplier by 1. 

num = 1 
while(TRUE) {
    result <- num * 4
    print(result)
    
    if (result > 100) {
        break
    }
    num = num + 1
}
