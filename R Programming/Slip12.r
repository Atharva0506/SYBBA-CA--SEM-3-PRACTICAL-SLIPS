# Slip 12
# Write an R Program to calculate Multiplication Table
# take input from the user
num <-readline(prompt = "Enter a number: ")
#after this enter number (5) in console and press enter
#again, come in script write code and run
num <-as.integer(num)
for(i in 1:10) {
print(paste(num,'x', i, '=', num*i))
}
#In R language readline() method takes input in string format. If one inputs an integer then it is
#inputted as a string, lets say, one wants to input 255, then it will input as “255”, like a string. So
#one needs to convert that inputted value to the format that he needs. In this case, string “255” is
#converted to integer 255. To convert the inputted value to the desired data type, there are some
#functions in R,
#as.integer(n); —> convert to integer
#as.numeric(n); —> convert to numeric type (float, double etc)
#as.complex(n); —> convert to complex number (i.e 3+2i)
#as.Date(n) —> convert to date …, etc
#prompt is use inside the readline() function. Actually, prompt argument facilitates other
#functions to constructing of files documenting. But prompt is not mandatory to use all the time.