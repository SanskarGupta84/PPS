import pandas as pd

data1 = {'ID': [1, 2], 'Name': ['Alice', 'Bob']}
data2 = {'ID': [1, 2], 'Age': [25, 30]}
df1 = pd.DataFrame(data1)
df2 = pd.DataFrame(data2)
merged = pd.merge(df1, df2, on='ID')
print(merged)
