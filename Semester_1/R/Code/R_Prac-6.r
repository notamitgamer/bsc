# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to access List elements, modify a List Element, add items to List, 
# Remove items from a List, length of List.

l <- list("Amit", 19, "Madhyamgram", 94.5)
print("Initial list:")
print(l)

l[[4]] = 95.46
print("after modifing last element: ")
print(l)

l[length(l) + 1] <- "hello"
print("after adding new element:")
print(l)

l[3] <- NULL
print("after deleting a element: ")
print(l)

print(paste("length of the list after modifing:", length(l)))