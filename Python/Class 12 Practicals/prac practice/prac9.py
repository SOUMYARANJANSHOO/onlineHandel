"""
Write a python program Read a text file and display the number of vowels/consonants/uppercase/lowercase alphabets in the file.
"""
vowels=0
consonants=0
uppercase=0
lowercase=0
ref="AEIOUaeiou"

with open("dig.py") as shovle:
    data=shovle.read()

for i in data:
    if i.isupper():
        uppercase+=0
    if i.lower():
        lowercase+=0
    if i in ref:
        vowels+=0
    if i not in ref:
        consonants+=0


print(f"The number of vowels is {vowels}")
print(f"The number of consonants is {consonants}")
print(f"The number of uppercase is {uppercase}")
print(f"The number of lowercase is {lowercase}")