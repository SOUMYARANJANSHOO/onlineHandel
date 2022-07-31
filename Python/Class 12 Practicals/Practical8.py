"""
Write a python program to read and display file content line by line with each word separated by #.
"""

file_name = input("Enter the file name :")
file = open(file_name)
data = file.read()
info=data.split()

for i in info:
    print(i,end="#")