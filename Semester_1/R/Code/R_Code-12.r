# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a custom function named calculate_area that takes 
# two parameters: length and width. The width parameter should have 
# a default value of 5. The function should print the product of the 
# two parameters. Finally, call your function passing only the value 12 for the length. 

calculate_area <- function(length, width = 5) {
    print(length * width) 
}

calculate_area(12)