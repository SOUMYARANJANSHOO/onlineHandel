'''Program 8-5 Write a program using a user defined
function to check if a string is a palindrome
or not. (A string is called palindrome if it
reads same backwards as forward. For
example, Kanak is a palindrome.)'''

#solving by creating a new function
#Program 8-5
#Function to check if a string is palindrome or not
def checkPalin(st):
    i = 0
    j = len(st) - 1
    while(i <= j):
        if(st[i] != st[j]):
            return False
    i += 1
    j -= 1
    return True
#end of function
st = input("Enter a String: ")
result = checkPalin(st)
if result == True:
    print("The given string",st,"is a palindrome")
else:
    print("The given string",st,"is not a palindrome")

#solving without use of a function
st = input("Enter a String: ")
if st == st[::-1] :
    print("The given string",st,"is a palindrome")
else:
    print("The given string",st,"is not a palindrome")