# Write an R program to extract first 10 English letter in lower case and
# last 10 letters in upper case and extract letters between 22nd to 24th letters
# in upper case.
print("First 10 letters in lower case:")
x <- head(letters, 10)
x
print("Last 10 letters in upper case:")
y <- tail(LETTERS, 10)
y
print("Letters between 22nd to 24th letters in upper case:")
z <- (LETTERS[22:24])
z
#Head(): Function which returns the first n rows of the dataset.
#head(x, n=number)
#Tail(): Function which returns the last n rows of the dataset.
#tail(x,n=number)
#To create a sequential uppercase alphabet in R, use the LETTERS constant.
#The LETTERS is a character constant in R that generates an uppercase
#alphabet, and you can use it with different functions to extract the result as per
#your requirement.
