'''Write a Program in python to input a number and test if it is a prime  number'''
while True:
    num=int(input("Enter the number:"))
    if num ==1:
        print("1 is neither a prime nor a composite number")
    elif num<1:
        print("this number is not a prime number")
        print("Negative numbers are not prime numbers")
    else:
        for i in range(2,num):
            if num%i ==0:
                print(num,"is not a prime number")
                print(i,"times",num//i,"is",num)
                break
        else:
            print(num,"is a prime number")