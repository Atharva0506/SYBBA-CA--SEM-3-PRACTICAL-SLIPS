# Slip 15
# Write an R program to extract the five of the levels of factor created from a random
# sample from the LETTERS
x <- sample(LETTERS,size=50,replace=TRUE)
print("Original data:")
print(x)
f <- factor(x)
print("Original factors:")
print(f)
print("Only five of the levels")
print(x[1:5]