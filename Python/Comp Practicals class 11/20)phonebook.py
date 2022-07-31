'''Write a python program to input ‘n’ names and phone numbers to store it in a dictionary and to input any name to search and print the phone number of that particular name'''
n = int(input("How many names you want to enter: "))
phonebook={}
for i in range(n):
    name=input("Enter name of person:")
    number=input("Enter phone number:")
    phonebook[name]=number 

searchname=input("Enter the name you want to search for:")
print("The phonnumber of ",searchname," is: ",phonebook.get(searchname))