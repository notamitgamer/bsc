# Asking for a name
name <- readline(prompt = "Enter your name: ")

# Asking for a number (requires conversion)
age <- readline(prompt = "Enter your age: ")
age <- as.numeric(age) 

print(paste("Hello", name, "you are", age, "years old."))