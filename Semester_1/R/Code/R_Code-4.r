# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a standard if...else block that checks if a variable named 
# age is greater than 18. If the condition is true, print "You are eligible to vote.", 
# otherwise print "You cannot vote.". 

age <- -1
if (age < 0) {
    print("Not a valid age.")
} else if (age < 18) {
    print("Not eligible to vote.")
} else {
    print("Eligible to vote.")
}