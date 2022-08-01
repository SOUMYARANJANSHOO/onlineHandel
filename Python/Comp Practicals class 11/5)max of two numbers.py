'''WAP TO FIND OUT A MAXIMUM OF TWO NUMBERS'''
#this prog will find the max out of the two numbers given by the user

#this block of code will ensure the continuity
while True:
    #this take the two numbers from the user
    num1 = float(input("Enter the first number:"))
    num2 = float(input("Enter the second number:"))

    #finding the max of the two numbers and printing it
    if num1>num2 :
        print("The max of the two numbers is",num1)
    elif num1==num2 :
        print("The two numbers are equal")
    else:
        print("The max of the two numbers is",num2)