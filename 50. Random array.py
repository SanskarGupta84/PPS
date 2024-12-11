import numpy as np

rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))

random_array = np.random.rand(rows, cols)
print("Random Array:")
print(random_array)
