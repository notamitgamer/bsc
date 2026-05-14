# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Create a numeric vector of student exam scores. 
# Write a single line of code that evaluates these scores and 
# outputs "Pass" for any score 50 or above, and "Fail" for any score below 50.

score <- c(45, 26, 89, 21, 75, 99, 13, 68, 85)

ifelse(score < 50, "Fail", "Pass")