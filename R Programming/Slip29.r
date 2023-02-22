# Slip 29
# Write a script in R to create a list of students and perform the following
# 1) Give names to the students in the list.
# 2) Add a student at the end of the list.
# 3) Remove the first Student.
# 4) Update the second last student.
# create a list of Student
x <- list("Ivan" , "Scott" , "Tiger")
print(x)
# 1) Give names to the elements in the list.
x <- list(a="Ivan" , b="Scott" , c="Tiger")
names(x)
# 2) Add an element at the end of the list.
y <-list(d="King")
y
x <- c(x,y)
x
# 3) Remove the First Element.
x[1]<- NULL
x
# 4) Update the 2rd last Element
x[2] <- "Miller"
x