"""
Write a python program to create a binary file with roll number, name and marks. Input a roll number and update name and marks 
"""

import pickle

record={}
n=int(input("Enter the no of entry you want to enter::"))
for i in range(n):
    roll=int(input("Enter the roll no ::"))
    name=input("Enter the name::")
    marks=input("Enter the marks::")
    record[roll]=[name,marks]
with open("hello.dat","ab") as f:
    pickle.dump(record,f)

flag=True
r=int(input("Enter the roll no you want to search ::"))
d = open("hello.dat","rb+")
rec=pickle.load(d)
for i in rec:
    if i==r:
        print("Current Name is ::",rec[i][0])
        print("Current Marks is ::",rec[i][1])
        rec[i][0] = input("Enter new name ::")
        rec[i][1] = input("Enter new marks ::")
        flag=False
        
if flag :
    print("Report not found")
else :
    d.seek(0)
    rec=pickle.dump(rec,d)
    print("report sucessfully updated")


d.close()
