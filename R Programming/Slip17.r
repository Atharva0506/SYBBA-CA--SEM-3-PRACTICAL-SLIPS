# Slip 17
# Write an R Program to calculate Decimal into binary of a given number.
dec2bin <- function(n) {
if(n > 1) {
dec2bin(as.integer(n/2))
}
cat(n %% 2)
}
dec2bin(5)
cat() function in R Language is used to print out to the screen or to a file.
#Syntax:
#cat(…, file = “”, sep = ” “, fill = FALSE, labels = NULL, append = FALSE)
#Parameters:
#…: atomic vectors, names, NULL and objects with no output
#file: the file in which printing will be done
#sep: specified separator
#fill: If fill=TRUE, a new line will be printed, otherwise not
#labels: specified labels
#Outputs the objects, concatenating the representations. cat performs much less conversion than
#print.