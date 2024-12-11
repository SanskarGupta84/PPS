import pandas as pd

data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [25, 30, 35, 40],
    'City': ['New York', 'Los Angeles', 'Chicago', 'New York']
}

df = pd.DataFrame(data)
filtered_data = df.query('Age > 30 and City == "New York"')

print("Original DataFrame:")
print(df)
print("\nFiltered DataFrame:")
print(filtered_data)
