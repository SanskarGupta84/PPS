# Input
n = int(input("Enter the number of terms: "))

# Output
a, b = 0, 1
print("Fibonacci Series:")
for i in range(n):
    print(a, end=" ")
    a, b = b, a + b
