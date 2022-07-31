"""
Write a python program to remove all the lines that contain the character ‘a’ in a file and write it to another file.
"""
with open("dig.txt") as shovel:
    data=shovel.readlines()

writer=[]
for i in data:
    if 'a' not in i:
        writer.append[i]

with open("dig2.txt","w") as shovel2:
    shovel2.writelines(writer)