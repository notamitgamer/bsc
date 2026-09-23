# Sum of the series: 1 + 1/2 + 1/3 + ... + 1/n
n = int(input("Enter the value of n: "))
sum_series = 0
for i in range(1, n + 1):
    sum_series += 1 / i
print(f"Sum of the series up to {n} terms = {sum_series:.4f}")