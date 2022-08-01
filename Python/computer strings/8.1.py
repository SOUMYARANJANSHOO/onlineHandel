'''Program 8-1 Write a program with a user defined
function to count the number of times a
character (passed as argument) occurs in
the given string.'''

#solving using new function:-
#Program 8-1
#Function to count the number of times a character occurs in a
#string
def charCount(ch,st):
    count = 0
    for character in st:
        if character == ch:
            count += 1
    return count
#end of function
st = input("Enter a string: ")
ch = input("Enter the character to be searched: ")
count = charCount(ch,st)
print("Number of times character",ch,"occurs in the string is:",count)



# solving without using function
st = input("Enter a string: ")
ch = input("Enter the character to be searched: ")
count = 0
for character in st:
    if character == ch  :
        count += 1

print(f"Number of times character {ch} occurs in the string is:{count}")