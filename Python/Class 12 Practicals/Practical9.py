"""
Write a python program Read a text file and display the number of vowels/consonants/uppercase/lowercase alphabets in the file.
"""
vowels_count=0
consonants_count=0
uppercase_count=0
lowercase_count=0
vowels="AEIOUaeiou"

file_name=input("Enter the file name :")
file=open(file_name)
data=file.read()
for i in data:
    if i.isupper():
        uppercase_count+=1
    if i.islower():
        lowercase_count+=1
    if i in vowels:
        vowels_count+=1
    if i not in vowels :
        consonants_count+=1

print("The number of vowels in the file is :",vowels_count)
print("The number of consonants in the file is :",consonants_count)
print("The number of uppercae in the file is :",uppercase_count)
print("The number of lowecase in the file is :",lowercase_count)

