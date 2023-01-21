# Write an R program to change the first level of a factor with another level of a given
# factor.
x <- c("a", "b", "a", "c", "b")
print("Original vector:")
x
y <- factor(x)
print("Factor of the said vector:")
y
levels(y)[1] <- "e"
print(y)
#factor() function to convert the vector into factor.
#X
#It is the input vector which is to be transformed into a factor.
#levels
#It is an input vector that represents a set of unique values which are taken by x