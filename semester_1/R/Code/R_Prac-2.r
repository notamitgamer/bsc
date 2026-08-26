# Check whether a number is even or odd.

num <- readline(prompt="Enter the number: ")
num <- as.integer(num)
print(paste(num, "is", ifelse(num %% 2 == 0, "EVEN", "ODD"), "number."))
