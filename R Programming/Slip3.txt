# slip 3
# Write an R program to compare two data frames to find the elements in
# first data frame that are not present in second data frame.
install.packages('compare')
library(compare)
a1 <- data.frame(a = 1:5, b = letters[1:5])
a1
a2 <- data.frame(a = 1:3, b = letters[1:3])
a2
#comparison <- compare(a1,a2,allowAll=TRUE)
#comparison$tM
#difference <-
#data.frame(lapply(1:ncol(a1),function(i)setdiff(a1[,i],comparison$tM[,i])))
#colnames(difference) <- colnames(a1)
#difference