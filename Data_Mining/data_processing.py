import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

#Import the dataset
data = pd.read_csv('Placement_Data.csv')

x = data.iloc[:, :-2].values # All rows but exclude last two columns
y = data.iloc[:, -1].values #All rows but exclude last one columns

print("\n \n*** This is our data ****")
print(data) # Printing the data set
print("\n \n*** This is our x ****")
print(x) # Independent variable : variable on which we are going to predict our result,
print("\n \n*** This is our y ****")
print(y) # Dependent variable


# Handle missing data
from sklearn.impute import SimpleImputer
imputer_y = SimpleImputer(missing_values=np.nan, strategy='mean')
imputer_y.fit(y.reshape(-1,1))
y = imputer_y.transform(y.reshape(-1,1))

print("\n** --- After using Imputer ---- **\n")
print(y)
