'''Write program to accept the string and count the number of vowels in a  string'''
vowel="AEIOUaeiou"
string = input("Enter a string:")
totalvowel=0
for i in range(len(string)):
    if string[i] in vowel:
        totalvowel += 1

print("The total number of character in the string is:",len(string))
print("The total number of vowel alphabets in the string is:",totalvowel)
input()
