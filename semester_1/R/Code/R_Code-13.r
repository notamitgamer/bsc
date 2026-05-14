# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Create a list named student_record containing a string, 
# an integer, and a numeric vector of two grades. Then, add the 
# logical value TRUE to the end of the list, ensuring the original 
# student_record variable is updated. Print the final list. 

student_record <- list("Amit Dutta", 95, c(95, 96))
print(student_record)
student_record <- append(student_record, TRUE)
print(student_record)