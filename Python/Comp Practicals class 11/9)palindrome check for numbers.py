'''Write a Program in python to check whether number is a palindrome  number or not.'''
#while will ensure the continuity of the program
while True:
    int1=int(input("Enter the number:"))
    int3=int1
    int2=0
    while(int1>0):
        dig=int1%10
        int2=int2*10+dig
        int1=int1//10
    if int3==int2:
        print("The number is a palindrome")
    else:
        print("The number is not a palindrome")
input()
