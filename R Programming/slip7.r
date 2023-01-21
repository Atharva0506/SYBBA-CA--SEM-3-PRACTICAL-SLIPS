# Write an R program to create a Dataframes which contain details of 5 employees
# and display the details in ascending order.
Id <- c(1,2,3,4,5 )
Names <- c("Ivan" , "Scott" , "Tiger" , "King" , "Miller")
Designation <- c("Technical Support" , "Asst Prof" , "Asst Prof" , "Asst Prof" ,
"Asst Prof")
Gender <- c("M" , "M" , "M" , "M" , "M")
# Creating Data Frame of Employee
Employees <- data.frame(Id , Names , Designation , Gender)
Employees