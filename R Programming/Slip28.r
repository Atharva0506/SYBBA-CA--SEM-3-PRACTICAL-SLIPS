# Slip 28
# Write an R program to convert a given matrix to a list and print list in ascending order.
x <- matrix(11:20,nrow=3, ncol=3)
print("Original matrix:")
print(x)
y <- split(x, rep(1:ncol(x), each = nrow(x)))
print("list from the said matrix:")
print(y)
#split () function in R Language is used to divide a data vector into groups as defined by the
#factor provided.
#Syntax: split(x, f, drop = FALSE)
#Parameters:
#x: represents data vector or data frame
#f: represents factor to divide the data
#drop: represents logical value which indicates if levels that do not occur should be dropped
#In the R programming language, A very useful function for creating a vector by repeating a
#given number vector with the specified number of times is the rep().
#The general structure of rep (): rep (v1, n1).
#Here, v1 is repeated n1 times.
#EX:- # 1,2,3 repeated 3 times
#rep(1:3,each=3)
#Output:
#[1] 1 2 3 1 2 3 1 2 3