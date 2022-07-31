"""
Write a menu driven program in python to delete name of a student from dictionary and to search phone no of a student by student name. Create menu as below: 
MENU 
1. Delete from Dictionary 
2. Search Phone number using name from Dictionary 
3. Exit
"""

phonebook={}
while True:
    print("******MENU******")
    print("1:Add to Dictionary")
    print("2:Delete from Dictionary")
    print("3:Search Phone number using name from Dictionary ")
    print("4:Exit ")
    query=int(input("Enter your choice:"))

    if query==1:
        n=int(input("Enter the number of contacts you want to enter::"))
        for i in range(n):
            name=input("Enter the name:")
            name.upper()
            num=input("Enter the number:")
            phonebook[name]=number
    elif query==2:
        n=input("Enter the name you want to delete::")
        n.upper()
        del phonebook[n]
    elif query==3:
        n=input("Enter the name you want to search:")
        n.upper()
        print(f"The phone number of {n} is {phonebook[n]}")
    elif query==4:
        break
    else:
        print("Enter a valid input")