# WAP (Write a Program) to calculate total marks, percentage and grade of a student. Marks obtained in each of the three subjects are to be input by the user.

name = input("Enter the name: ")
print("Enter the marks: \n")
total = 0
for i in range(5):
    total +=float(input(f"Subject {i}: "))
p = total / 5
if p >= 90: 
    g = 'A+'
elif p >= 80: 
    g = 'A'
elif p >= 70:
    g = 'B'
elif p >= 60:
    g = 'C'
elif p >= 50: 
    g = 'D'
else: 
    g = 'Fail'

print("\n--- Student Report ---")
print("Student Name:", name)
print("Total Marks:", total, "/ 500")
print("Percentage:", round(p, 3), "%")
print("Grade:", g)