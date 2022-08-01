"""
Write a python program to remove all the lines that contain the character ‘a’ in a file and write it to another file.
"""


first_file_name=input("Enter the name of the first file :")
second_file_name=input("Enter the name of the second file :")
file_from = open(first_file_name)
file_to = open(second_file_name,"w")
data = file_from.readlines()

for i in data:
    if 'a' in i :
        i=i.replace("a", "")
        file_to.write(i)

file_from.close()
file_to.close()