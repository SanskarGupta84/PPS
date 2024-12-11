import pandas as pd

data = {'A': [1, None, 3], 'B': [4, 5, None]}
df = pd.DataFrame(data)
print("Original DataFrame:")
print(df)
print("\nDataFrame after filling NaN values with 0:")
print(df.fillna(0))
