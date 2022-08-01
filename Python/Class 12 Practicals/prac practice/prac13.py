"""
Write a python program to create a binary file with roll number, name and marks. Input a roll number and update name and marks 
"""
import pickle

record={}
n=int(input("Enter the no of entry you want to enter:"))
for i in range(n):
    roll=int(input("Enter the roll no ::"))
    names=input("Enter the names:")
    marks=input("Enter the marks:")
    record[roll]=[names,marks]
with open("student.dat","wb") as resister:
    pickle.dump(record,resister)


res=open("student.dat","rb+")
data=pickle.load(res)


flag=True
d=int(input("Enter the roll no you wnat to search:"))
for i in data:
    if i==d:
        print("Current name is ",data[i][0])
        print("Current mark is ",data[i][1])
        rec[i][0]=input("Enter the new name:")
        rec[i][2]=input("Enter the new mark:")
        flag=False

if flag:
    print("record not found")
else:
    resister.seek(0)
    pickle.dump(rec, res)
    print("Sucessfully updated result")
res.close()