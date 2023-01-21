# Slip 18
# Write an R program to create three vectors a,b,c with 3 integers.
# Combine the three vectors to become a 3*3 matrix where each column
# represents a vector. Print the content of the matrix.
a<-c(1,2,3)
b<-c(4,5,6)
c<-c(7,8,9)
m<-cbind(a,b,c)
print("Content of the said matrix:")
print(m)
#cbind() function in R Language is used to combine specified Vector, Matrix or Data Frame by
#columns.
#Syntax: cbind(x1, x2, …, deparse.level = 1)
#Parameters:
#x1, x2: vector, matrix, data frames
#deparse.level: This value determines how the column names generated.
#The default value of deparse.level is 1.