---
source: 'docs/semester_2/model_questions_py.md'
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="lucide lucide-square-text preview-icon"><rect width="18" height="18" x="3" y="3" rx="2"/><path d="M7 8h8"/><path d="M7 12h10"/><path d="M7 16h6"/></svg> Model Questions: Programming for Problem Solving using Python'
---

# Model Questions: Programming for Problem Solving using Python
### Paper Code: SEC (NEP, WBSU — Sem 2)

---

::: info How to use this file
This is a **sure-shot / high-priority** list built directly on the SEC Python study material
(Modules 1–6). All 8 practical programs from the syllabus are included **in full** below —
memorise and be able to reproduce each one, since the practical exam draws directly from this set.
:::

## Unit 1 — Program Planning & Problem Solving Techniques (Module 1 & 2)

**Q1.** What is meant by **Program Design**? Differentiate between **Top-down** and **Bottom-up** programming approaches with examples.

**Q2.** What is **Structured Programming**? Explain the three structured control flows (sequence, selection, repetition) it relies on, and why it avoids unstructured jumps like `goto`.

**Q3.** What is an **algorithm**? How does it differ from a **flowchart**? List the standard flowchart symbols (oval, rectangle, diamond, parallelogram) and what each represents.

**Q4.** What is a **decision table**? When is it preferred over a flowchart for representing logic?

**Q5.** What is **debugging**? Explain the three categories of programming errors — **Syntax Errors**, **Runtime Errors (Exceptions)**, and **Logical Errors** — with one example of each.


## Unit 2 — Overview & Introduction to Python (Module 3 & 4)

**Q6.** Explain the structure of a Python program. How does Python use **indentation** instead of curly braces `{}` to define code blocks? What is the standard indentation convention?

**Q7.** What are **tokens** in Python? Explain the three types: **Keywords**, **Identifiers**, and **Literals**, with rules for naming identifiers and two examples of each.

**Q8.** List and explain all categories of operators in Python: **Arithmetic**, **Relational**, **Logical**, **Assignment**, and **Ternary (Conditional)**. Give one example expression for each. Why does Python not support `++` or `--`?

**Q9.** Differentiate between `/` (true division), `//` (floor division), and `%` (modulus) in Python with example outputs for `17 / 5`, `17 // 5`, and `17 % 5`.


## Unit 3 — Creating Python Programs: Input, Conditions & Loops (Module 5)

**Q10.** Explain the `input()` function in Python. How is it different from `input("prompt")`? Why does `input()` always return a **string**, and how do you convert it to a number?

**Q11.** Write a short program that takes multiple user inputs (e.g., name, favourite animal, colour, number) and prints them in a formatted sentence using an f-string.

**Q12.** Explain the Python **if statement** with syntax and an example. What is the role of **indentation** in an if-block? What error occurs if the block under `if` is not indented?

**Q13.** Can multiple statements be written inside a single `if` block? What rule must be followed for them? Give an example (e.g., checking voting eligibility).

**Q14.** Explain how a **boolean variable** can be used directly in an `if` condition without a comparison operator, with an example (e.g., `logged_in = True`).

**Q15.** Explain the **for loop** in Python with the `range()` function. Write a program to print numbers from 1 to 8 using a `for` loop, and another to iterate over a list of fruits.

**Q16.** Explain the jump statements **`break`**, **`continue`**, and **`pass`** in Python with one example each. What is the key difference between `break` and `continue`?

**Q17.** What is a **function** in Python? How is it defined using `def`? What are **default arguments** in a function — explain with an example.


## Unit 4 — Practical Programs (Module 6) — Sure-Shot Practical Questions

::: tip Practical Exam Note
These 8 programs are **directly from your syllabus's practical list**. Learn to write each one from memory and be ready to explain the logic line-by-line — this is the most likely source of your practical exam question.
:::

### Q18. Temperature Conversion (Menu-Driven)

Write a **menu-driven** Python program to convert Fahrenheit to Celsius and Celsius to Fahrenheit based on user choice.

```python
def temp_conversion():
    print("--- Temperature Converter ---")
    print("1. Fahrenheit to Celsius")
    print("2. Celsius to Fahrenheit")
    choice = input("Enter choice (1 or 2): ")
    if choice == '1':
        f = float(input("Enter temperature in Fahrenheit: "))
        c = (f - 32) * 5 / 9
        print(f"{f}°F is equal to {c:.2f}°C")
    elif choice == '2':
        c = float(input("Enter temperature in Celsius: "))
        f = (c * 9 / 5) + 32
        print(f"{c}°C is equal to {f:.2f}°F")
    else:
        print("Invalid choice!")

# Call the function
temp_conversion()
```

### Q19. Student Grade Calculator

Write a Python program that takes marks for 5 subjects, computes the total and percentage, and assigns a grade (`A+` to `F`) using `if-elif-else`.

```python
# Student Grade Calculator
name = input("Enter student's name: ")
print("Enter marks for 5 subjects (out of 100):")
sub1 = float(input("Subject 1: "))
sub2 = float(input("Subject 2: "))
sub3 = float(input("Subject 3: "))
sub4 = float(input("Subject 4: "))
sub5 = float(input("Subject 5: "))

# Calculate total and percentage
total = sub1 + sub2 + sub3 + sub4 + sub5
percentage = total / 5

# Determine grade
if percentage >= 90:
    grade = 'A+'
elif percentage >= 80:
    grade = 'A'
elif percentage >= 70:
    grade = 'B'
elif percentage >= 60:
    grade = 'C'
elif percentage >= 50:
    grade = 'D'
else:
    grade = 'F'

# Display results
print("\n--- Student Report ---")
print("Student Name:", name)
print("Total Marks:", total, "/ 500")
print("Percentage:", round(percentage, 2), "%")
print("Grade:", grade)
```

### Q20. Area Calculator Using Functions (Menu-Driven)

Write a **menu-driven** Python program using **separate functions** to compute the area of a circle, rectangle, and triangle.

```python
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
```

### Q21. Fibonacci Series up to N Terms

Write a Python program to print the Fibonacci series up to `N` terms entered by the user.

```python
# Fibonacci Series up to N Terms
n = int(input("Enter the number of terms: "))
a = 0
b = 1
print("Fibonacci Series:")
for i in range(n):
    print(a, end=" ")
    c = a + b
    a = b
    b = c
```

### Q22. Factorial of a Number

Write a Python program using a **function** to compute the factorial of a number. Handle the case of a negative input.

```python
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
```

### Q23. Prime Number Checker

Write a Python program to check whether a given number is prime.

```python
# Prime Number Checker
num = int(input("Enter a number: "))
if num <= 1:
    print(num, "is not a Prime Number")
else:
    is_prime = True
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        print(num, "is a Prime Number")
    else:
        print(num, "is not a Prime Number")
```

### Q24. String Palindrome Checker

Write a Python program using a **function** to check whether a given string is a palindrome (case-insensitive).

```python
# Function to check palindrome
def is_palindrome(text):
    # Convert to lowercase for case-insensitive comparison
    text = text.lower()
    # Reverse the string and compare
    if text == text[::-1]:
        return True
    else:
        return False

# Main program
string = input("Enter a string: ")
if is_palindrome(string):
    print(f'"{string}" is a Palindrome')
else:
    print(f'"{string}" is not a Palindrome')
```

### Q25. Sum of Mathematical Series: 1 + 1/2 + 1/3 + … + 1/n

Write a Python program to compute the sum of the series `1 + 1/2 + 1/3 + ... + 1/n` for a user-given `n`.

```python
# Sum of the series: 1 + 1/2 + 1/3 + ... + 1/n
n = int(input("Enter the value of n: "))
sum_series = 0
for i in range(1, n + 1):
    sum_series += 1 / i
print(f"Sum of the series up to {n} terms = {sum_series:.4f}")
```


## Quick Reference: Syllabus Unit Map

| Unit | Topics | Questions |
|------|--------|-----------|
| 1 | Program Design, Structured Programming, Algorithms, Flowcharts, Debugging | Q1–Q5 |
| 2 | Python Structure, Indentation, Tokens, Operators | Q6–Q9 |
| 3 | Input, If Statements, Loops, Jump Statements, Functions | Q10–Q17 |
| 4 | Practical Programs (all 8 syllabus programs) | Q18–Q25 |

---

::: tip Exam Strategy
- **Theory (5-mark) sure-shots**: Top-down vs bottom-up, types of errors (syntax/runtime/logical), tokens (keywords/identifiers/literals), operator categories, `break` vs `continue` vs `pass`.
- **Practical (10–15 mark) sure-shots**: All 8 programs above are the entire practical syllabus — expect the exam to pick directly from this list. Practice writing each **without** looking, including proper indentation and f-string formatting.
- Common trap: remember `input()` always returns a **string** — always cast with `int()` or `float()` before doing arithmetic.
- Practice explaining the **logic** of each program in plain words (viva-style), not just typing the code.
:::
::: info Key Programs to Memorise
Menu-driven Temperature Converter · Student Grade Calculator (if-elif ladder) · Menu-driven Area Calculator (functions) · Fibonacci Series (loop) · Factorial (function) · Prime Checker · Palindrome Checker (string slicing `[::-1]`) · Series Sum (1 + 1/2 + … + 1/n)
:::
