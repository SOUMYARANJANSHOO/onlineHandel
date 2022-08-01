""" Program 8-2 Write a program with a user defined
function with string as a parameter which
replaces all vowels in the string with '*' """

#solving using a function
#Program 8-2
#Function to replace all vowels in the string with '*'
def replaceVowel(st):
    #create an empty string
    newstr = ''
    for character in st:
        #check if next character is a vowel
        if character in 'aeiouAEIOU':
            #Replace vowel with *
            newstr += '*'
        else:
            newstr += character
    return newstr
#end of function
st = input("Enter a String: ")
st1 = replaceVowel(st)
print("The original String is:",st)
print("The modified String is:",st1)


#solving without creating a function :-
st = input("Enter a String: ")
st1 = ""
for character in st:
    if character in "aeiouAEIOU":
        st1 = st.replace(character,"*") 
print("The original String is:",st)
print("The modified String is:",st1)
