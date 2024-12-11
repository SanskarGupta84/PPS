import numpy as np

size = int(input("Enter size of square matrix: "))
matrix = [list(int(x) for x in input(f"Enter row {i+1}: ").split()) for i in range(size)]
array = np.array(matrix)
print("Diagonal Elements:", np.diag(array))
