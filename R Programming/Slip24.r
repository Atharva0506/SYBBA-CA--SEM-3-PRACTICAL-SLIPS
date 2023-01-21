#Write a script in R to create two vectors of different lengths and give these vectors as
input to array and print Multiplication of those matrices.


# Create two vectors of different lengths
vector1 <- c(1, 2, 3)
vector2 <- c(4, 5, 6)

# Combine the vectors into an array
array1 <- array(vector1, dim = c(3, 1))
array2 <- array(vector2, dim = c(3, 1))

# Multiply the two matrices
result_matrix <- array1 %*% t(array2)

# Print the resulting matrix
print(result_matrix)
