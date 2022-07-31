"""
Write a python program to read and display file content line by line with each word separated by #.
"""
with open("dig.txt") as shovle:
    data=shovle.read()
string="#".join(data)
print(string)