'''WAP TO FIND REMAINDER AND QUOTIENT OF A GIVEN 2 NUMBER'''
#This prog will find the remainder and quotient of a given 2 number

#while will ensure the continuity of the code
while True:

    int1=int(input("Enter the first number:"))
    int2=int(input("Enter the second number:"))
    rem=int1%int2
    quo=int1/int2
    print("The remainder and quotient by divding the first number by the second is",rem,"and",quo,"respectively")