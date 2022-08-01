'''Program 8-4 Write a program which reverses a string
passed as parameter and stores the
reversed string in a new string. Use a user
defined function for reversing the string'''

#solving by creating a function
#Program 8-4
#Function to reverse a string
def reverseString(st):
    newstr = '' #create a new string
    length = len(st)
    for i in range(-1,-length-1,-1):
        newstr += st[i]
    return newstr
#end of function
st = input("Enter a String: ")
st1 = reverseString(st)
print("The original String is:",st)
print("The reversed String is:",st1)

#solving without using a function
st = input("Enter a String: ")
st1 = st[::-1]
print("The original String is:",st)
print("The reversed String is:",st1)