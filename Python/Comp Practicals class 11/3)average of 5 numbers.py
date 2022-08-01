'''WAP TO FIND THE AVERAGE OF FIVE NUMBERS'''
#this prog will find the avg of fve numbers given by the user

#this block of code will ensure the continuity
while True:

    #this block of code will take input from user
    int1 = float(input("Enter the first number:"))
    int2 = float(input("Enter the second number:"))
    int3 = float(input("Enter the third number:"))
    int4 = float(input("Enter the forth number:"))
    int5 = float(input("Enter the fifth number:"))


    #this block of code which will calculate the result
    result = float((int1 + int2 + int3 + int4 + int5)/5) 

    #this block of code will print the result
    print("The average of thr following numbers are:",result)