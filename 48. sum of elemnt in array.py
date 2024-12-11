arr = []
n = int(input("Enter no. of elements: "))
for i in range(n):
    element = int(input(f"Enter element {i + 1}: "))
    arr.append(element)

print("Sum:", sum(arr))  
