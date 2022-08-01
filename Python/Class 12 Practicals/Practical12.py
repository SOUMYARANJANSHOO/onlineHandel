"""
Write a python program to create a binary file with name and roll number. Search for a given roll number and display name, if not found display appropriate message.
"""

import pickle

record={}
n=int(input("Enter the no of entry you want to enter::"))
for i in range(n):
    roll=int(input("Enter the roll no ::"))
    name=input("Enter the name::")
    record[roll]=name
with open("student.dat","wb") as f:
    pickle.dump(record,f)

flag=True
r=int(input("Enter the roll no you want to search ::"))
with open("student.dat","br") as d:
    rec = pickle.load(d)
    for i in rec:
        if i==r:
            print("Roll No::",i)
            print("Name",rec[i])
            flag=False

if flag:
    print("Record not found")
