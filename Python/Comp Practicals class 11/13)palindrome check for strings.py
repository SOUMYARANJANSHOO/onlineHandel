'''Write a Program in python that reads a string and check whether it is a  palindrome string or not'''
while True:
    str1=input("Enter the string:").lower()
    str2=str1[::-1]
    if str1==str2:
        print("The string is a palindrome")
    else:
        print("The string is not a palindrome")