# Write a script in R to create an array, passing in a
# vector of values and a vector of dimensions. Also provide names for each dimension.
a <- array(
6:30,
dim = c(4, 3, 2),
dimnames = list(
c("Col1", "Col2", "Col3", "Col4"),
c("Row1", "Row2", "Row3"),
c("Part1", "Part2")
)
)
print(a)

#Arrays
#Compared to matrices, arrays can have more than two dimensions.
#We can use the array () function to create an array, and the dim parameter to specify the
#dimensions:
#Example Explained
#In the example above, we create an array with the values 1 to 24.
#How does dim=c(4,3,2) work?
#The first and second number in the bracket specifies the amount of rows and columns.
#The last number in the bracket specifies how many dimensions we want.
#Note: Arrays can only have one data type