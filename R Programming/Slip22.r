# Write an R program to print the numbers from 1 to 100 and print "SY" for multiples of 3,
# print "BBA" for multiples of 5, and print "SYBBA" for multiples of both.
for (n in 1:100) {
if (n %% 3 == 0 & n %% 5 == 0) {print("SYBBA")}
else if (n %% 3 == 0) {print("SY")}
else if (n %% 5 == 0) {print("BBA")}
else print(n)
}

#Modulo: %%
#The modulo returns the remainder of the division of the number to the left by the number on
#the right, for example 5 modulo 3 or 5 %% 3 is 2.
