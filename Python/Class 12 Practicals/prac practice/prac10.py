"""
Write a python code that accepts a filename, and copies all lines that do not start with a lowercase letter from the first file into the second.
"""
with open("dig.txt") as shovel:
    data=shovel.readlines()
substrate=[]
for i in data:
    if i[0].islower():
        substrate.append(i)

with open("dig2.txt","w") as shovel2:
    shovel2.writelines(substrate)