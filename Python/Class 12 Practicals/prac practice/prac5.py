"""
Write a menu driven program in python to do following
MENU
1.Reverse String
2.Check Whether string is Palindrome
3.Make half string in Uppercase
4.Exit
"""
while True:
    print("-----------------------------------------------")  
    print("MENU")
    print("1.Reverse String")
    print("2.Check Wheather String Is Palindrome")
    print("3.Make Half String In Uppercase")
    print("4.Exit")

    query=int(input("Enter your choice::"))
    if query==1:
        string=input("Enter the string:")
        string=srting[::-1]
        print("The string in reverse order is ",string)
    elif query==2:
        orgstring=input("Enter the string::")
        revstring=orgstring[::-1]
        if orgstring==revstring:
            print("The string is a pallindrome")
        else :
            print("The string is not a pallindrome")
    elif query==3:
        string=input("Enter the string:")
        lenght=len(string)
        halflength=length//2
        result=""
        for i in range(lengt):
            if i<=halflength:
                result+=string[i].upper()
            else:
                result+=string[i]
    elif query==4:
        break
    else :
        print("Enter a valid input")