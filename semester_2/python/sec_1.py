# Write a menu-driven Python program to convert Fahrenheit to Celsius and Celsius to Fahrenheit based on user choice.

while True: 
    choice = int(input("\n1. f to c"
          "\n2. c to f"
          "\n-1. exit"
          "\nEnter the choice: "))
    if choice == 1:
        f = float(input("\nEnter the f: "))
        c = (f - 32) * 5 / 9
        print(f"{f} = {c:.2f}c\n")
    elif choice == 2:
        c = float(input("Enter the c: "))
        f = (c * 9 / 5) + 32
        print(f"{c} = {f:.2f}f\n")
    elif choice == -1:
        break
    else: 
        print("Wrong choice.\n")
