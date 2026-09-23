# Function to calculate area of a circle
def area_circle():
    radius = float(input("Enter the radius of the circle: "))
    area = 3.14 * radius * radius
    print(f"Area of the Circle = {area:.2f}")

# Function to calculate area of a rectangle
def area_rectangle():
    length = float(input("Enter the length of the rectangle: "))
    breadth = float(input("Enter the breadth of the rectangle: "))
    area = length * breadth
    print(f"Area of the Rectangle = {area:.2f}")

# Function to calculate area of a triangle
def area_triangle():
    base = float(input("Enter the base of the triangle: "))
    height = float(input("Enter the height of the triangle: "))
    area = 0.5 * base * height
    print(f"Area of the Triangle = {area:.2f}")

# Main menu function
def menu():
    while True:
        print("\n--- Area Calculator ---")
        print("1. Area of Circle")
        print("2. Area of Rectangle")
        print("3. Area of Triangle")
        print("4. Exit")
        choice = input("Enter your choice (1-4): ")
        if choice == '1':
            area_circle()
        elif choice == '2':
            area_rectangle()
        elif choice == '3':
            area_triangle()
        elif choice == '4':
            print("Exiting the program...")
            break
        else:
            print("Invalid choice! Please try again.")

# Call the menu function
menu()