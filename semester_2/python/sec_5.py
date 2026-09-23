# Function to calculate factorial
def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact = fact * i
    return fact

# Main program
num = int(input("Enter a number: "))
if num < 0:
    print("Factorial is not defined for negative numbers.")
else:
    result = factorial(num)
    print(f"Factorial of {num} is {result}")