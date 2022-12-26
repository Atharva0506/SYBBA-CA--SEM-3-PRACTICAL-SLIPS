# Write an R program to create a data frame using two given vectors and display
# the duplicated elements and unique rows of the said data frame.
x <- c(20,40,20,20,80,100,40,60)
y <- c(20,60,20,40,0,100,60,60)
print("Original data frame:")
z <- data.frame(x,y)
z
print("Duplicate elements of the said data frame:")
duplicated(z)
print("Unique rows of the said data frame:")
unique(z)

#Unique() function is used to return a vector, data frame, or array without any
#duplicate elements/rows.
#The R function duplicated() returns a logical vector where TRUE specifies
#which elements of a vector or data frame are duplicates.
