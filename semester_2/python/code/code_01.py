# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jun 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Coming back to basics after months.

n = int(input("How many numbers? "))
even_count = 0
odd_count = 0

for i in range(n):
    num = int(input("Enter a number: "))
    if num % 2 == 0:
        even_count += 1
    else:
        odd_count += 1

print("Even numbers:", even_count)
print("Odd numbers:", odd_count)