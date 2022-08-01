'''6.During voting, the Election Officer asks the age of every voter. He checks
whether the age is greater than equals to 18 or not as well as it is even or odd
number. According to the condition he shows one of the slip labelled as –
“ Write a Python program to implement this situation.
For Example
Input of the program will be
Tell me your age - 45
The output should be
Age is odd number and Eligible for voting'''

age = int(input("enter your age"))


if (age % 2) == 0 :
    a= "the age is even"
else :
    a="the age is odd"


if age>=18:
    b= "eligible for voting"
else :
    b= "not eligible for voting"

print(a,"and", b)