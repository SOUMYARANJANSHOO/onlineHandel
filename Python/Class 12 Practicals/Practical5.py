"""
Write a menu driven program in python to do following
MENU
1.Reverse String
2.Check Whether string is Palindrome
3.Make half string in Uppercase
4.Exit
"""

#running while loop 
while True:
    print("-----------------------------------------------")  #printing the menu
    print("MENU")
    print("1.Reverse String")
    print("2.Check Wheather String Is Palindrome")
    print("3.Make Half String In Uppercase")
    print("4.Exit")

    choice=int(input("Enter your choice:"))  #taking the user choice
    if choice==1:
        n=input("Enter the String:")
        n=n[::-1]     #reversing the string by slicing
        print("The string in reverse order is ",n)
    elif choice==2:
        n=input("Enter the string you want to check:")
        if n==n[::-1]:    #checking for pallindrome
            print("The entered string is a pallindrome")
        else:    
            print("The entered string isnot a pallindrome")
    elif choice==3:    #converting half string to uppercase
        n=input("Enter the string:")
        halflen=len(n)//2
        result=""
        for i in range(0,len(n)):
            if i < halflen :
                 result+= n[i].upper()
            else :
                result+= n[i]
        print("String after operation:",result)
    elif choice==4:
        print("Thank you for using our program")
        break
    else :
        print("Please enter a valid input")