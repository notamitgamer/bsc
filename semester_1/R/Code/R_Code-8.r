# Create a list named list1 containing the number 24, 
# the string "Sabby", the float 5.4, and the string "Nepal". 
# Then, write the code using the append() function to add the number 3.14 to the very end of this list. 

list1 <- list(24L, "Sabby", 5.4, "Nepal")
print("Before update")
print(list1)
print("After Update")
list1 <- append(list1, 3.14)
print(list1)
