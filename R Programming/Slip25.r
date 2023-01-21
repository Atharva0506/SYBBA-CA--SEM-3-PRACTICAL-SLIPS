# Slip 25
# Write an R program to create a list of elements using vectors, matrices and a functions.
# Print the content of the list.
#slip25
a<-c(0.4,-0.1,7,-78)
l<-list(
c(3,6,15,21,136),
month.abb,
matrix(c(3,-8,1,3,-4,9),nrow=2),
asin(a))
print("content of the list")
print(l)
#asin range -3.14/2 to 3.14/2(-1 to 1)
#Output
#[1] "content of the list"
#[[1]]
#[1] 3 6 15 21 136
#[[2]]
#[1] "Jan" "Feb" "Mar" "Apr" "May" "Jun" "Jul" "Aug" "Sep" "Oct" "Nov" "Dec"
#[[3]]
#[,1] [,2] [,3]
#[1,] 3 1 -4
#[2,] -8 3 9
#[[4]]
#[1] 0.4115168 NaN NaN NaN
#Warning message:
#In asin(a) : NaNs produced
#The month.abb is an inbuilt R constant.
#month.abb in R
#The month.abb is the three-letter abbreviations for the English month names. Sometimes date
#vector for months is recorded in numeric form, and it becomes difficult to treat or visualize it as
#a date vector.
#mnth <- c(12, 10, 8, 6, 4, 2)
#month.abb[mnth]
#Output
#[1] "Dec" "Oct" "Aug" "Jun" "Apr" "Feb"
#asin in R
#The asin() is a built-in R trigonometric function that computes the sine inverse of the given
#value; the returned angle is in the range -pi/2 through pi/2. The asin() method accepts vectors and
#returns the inverse of sine value.