# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a while loop with a number variable starting at 1. 
# The loop should print the number and increment it by 1, 
# but you must include an if statement with a break command to 
# stop the loop's execution exactly when number == 6

number <- 1
while (TRUE) {
    if(number == 6) {
        break
    }
    print(number)
    number = number + 1
}