# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# You have a vector of numbers: x <- c(12, 9, 23, 14). 
# Use R's shorthand ifelse() function to output "EVEN" if a number 
# in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not. 

x <- c(12, 9, 23, 14)
ifelse(x %% 2 == 0, "EVEN", "ODD")