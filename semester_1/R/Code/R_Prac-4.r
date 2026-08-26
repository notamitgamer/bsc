# Program to add two numbers in R program.

num1 <- as.double(readline(prompt="Enter 1st number: "))
num2 <- as.double(readline(prompt="Enter 2nd number: "))
if(is.na(num1) || is.na(num2)) {
    stop("You did not enter a valid number.")
}
print(paste("Result", num1 + num2))
