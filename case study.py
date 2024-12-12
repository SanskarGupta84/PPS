import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

# Step 1: Generate Data
data = {
    'Student_Name': ['Alice', 'Bob', 'Charlie', 'David', 'Eva'],
    'Math': [90, 80, 70, 85, 95],
    'Science': [85, 70, 90, 80, 88],
    'English': [88, 92, 80, 85, 90]
}

# Create a DataFrame
df = pd.DataFrame(data)

# Display the dataset
print("Original Data:")
print(df)

# Step 2: Exploratory Data Analysis (EDA)

## 2.1 Summary Statistics
print("\nSummary Statistics:")
print(df.describe())

## 2.2 Check for Missing Values
print("\nMissing Values in Each Column:")
print(df.isnull().sum())

## 2.3 Data Distribution (Histograms for each subject)
plt.figure(figsize=(12, 6))
df[['Math', 'Science', 'English']].hist(bins=10, edgecolor='black', figsize=(12, 6))
plt.suptitle('Grade Distribution for Each Subject')
plt.show()

## 2.4 Correlation Matrix
print("\nCorrelation Matrix:")
correlation_matrix = df[['Math', 'Science', 'English']].corr()
print(correlation_matrix)

# Visualize the correlation matrix using a heatmap
plt.figure(figsize=(8, 6))
sns.heatmap(correlation_matrix, annot=True, cmap='coolwarm', linewidths=0.5)
plt.title('Correlation Between Subjects')
plt.show()

## 2.5 Box Plot for Outliers (Per Subject)
plt.figure(figsize=(12, 6))
sns.boxplot(data=df[['Math', 'Science', 'English']], width=0.5)
plt.title('Box Plot of Grades')
plt.show()

# Step 3: Find the Average Grade for Each Student
df['Average_Grade'] = df[['Math', 'Science', 'English']].mean(axis=1)

# Display the updated DataFrame with average grades
print("\nAverage Grades for Each Student:")
print(df[['Student_Name', 'Average_Grade']])

# Step 4: Identify the Highest and Lowest Grades for Each Student
df['Highest_Grade'] = df[['Math', 'Science', 'English']].max(axis=1)
df['Lowest_Grade'] = df[['Math', 'Science', 'English']].min(axis=1)

# Display the updated DataFrame with highest and lowest grades
print("\nHighest and Lowest Grades for Each Student:")
print(df[['Student_Name', 'Highest_Grade', 'Lowest_Grade']])

# Step 5: Find the Class Average for Each Subject
subject_averages = df[['Math', 'Science', 'English']].mean()

# Display the class averages for each subject
print("\nClass Average for Each Subject:")
print(subject_averages)

# Step 6: Visualize the Results (Optional)
# Plot the average grades for each student
plt.figure(figsize=(10, 6))
plt.bar(df['Student_Name'], df['Average_Grade'], color='skyblue')
plt.title('Average Grade for Each Student')
plt.xlabel('Student Name')
plt.ylabel('Average Grade')
plt.show()

# Plot the class averages for each subject
plt.figure(figsize=(10, 6))
subject_averages.plot(kind='bar', color='lightgreen')
plt.title('Class Average for Each Subject')
plt.xlabel('Subject')
plt.ylabel('Average Grade')
plt.show()
