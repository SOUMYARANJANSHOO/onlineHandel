"""
Write a python code that accepts a filename, and copies all lines that do not start with a lowercase letter from the first file into the second.
"""

first_file_name=input("Enter the name of the first file :")
second_file_name=input("Enter the name of the second file :")
file_from = open(first_file_name)
file_to = open(second_file_name,"w")
data = file_from.readlines()
for i in data:
    if i[0].isalpha():
        if not i[0].islower():
            file_to.write(i)

file_from.close()
file_to.close()