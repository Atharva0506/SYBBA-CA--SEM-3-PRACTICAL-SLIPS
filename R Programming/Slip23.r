# Write a script in R to create two vectors of different lengths and give these
# vectors as input to array and print second row of second matrix of the array.
print("Two vectors of different lengths:")
v1 = c(1,3,4,5)
v2 = c(10,11,12,13,14,15)
print(v1)
print(v2)
result = array(c(v1,v2),dim = c(3,3,2))
print("New array:")
print(result)
print("The second row of the second matrix of the array:")
print(result[2,,2])

#Arrays
#Compared to matrices, arrays can have more than two dimensions.
#We can use the array() function to create an array, and the dim parameter to specify the
#dimensions:
#Example Explained
#In the example above we create an array with the values 1 to 24.
#How does dim=c(4,3,2) work?
#The first and second number in the bracket specifies the amount of rows and columns.
#The last number in the bracket specifies how many dimensions we want.
#Note: Arrays can only have one data type.
