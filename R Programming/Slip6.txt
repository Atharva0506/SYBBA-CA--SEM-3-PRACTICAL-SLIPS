# Slip 6
# Write an R program to create a simple bar plot of five subject's marks.
marks <- c(70, 95, 80, 74, 84)
barplot(marks,
main = "Comparing marks of 5 subjects",
xlab = "Marks",
ylab = "Subject",
names.arg = c("DS", "Big_Data", "Digital_Marketing", "Python", "WT"),
col = "darkred",
horiz = FALSE)