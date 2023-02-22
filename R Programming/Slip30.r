# Write an R program to sort a list of 10 strings in ascending and descending order.
x = list("d" , "b" , "g" , "n" , "e" , "t" , "a" , "l" , "i" , "j" )
print("Original list:")
print(x)
y<- unlist(x)
y
sort(y)
sort(y , decreasing = TRUE)
y <-list(y)
y
typeof(y)

#typeof() function in R Language is used to return the types of data used as the arguments