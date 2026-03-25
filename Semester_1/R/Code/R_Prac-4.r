# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to add two numbers in R program.

num1 <- as.double(readline(prompt="Enter 1st number: "))
num2 <- as.double(readline(prompt="Enter 2nd number: "))
if(is.na(num1) || is.na(num2)) {
    stop("You did not enter a valid number.")
}
print(paste("Result", num1 + num2))