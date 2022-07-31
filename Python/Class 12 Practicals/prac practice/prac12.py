"""
Write a python program to create a binary file with name and roll number. Search for a given roll number and display name, if not found display appropriate message.
"""
import pickle

record={}
n=int(input("Enter the number of entry you want to enter:"))
for i in range(n):
    roll=int(input("Enter the roll number::"))
    name=input("Enter the name ::")
    record[roll]=name
with open("student.dat","wb") as f:
    pickle.dump(record,f)


flag=True
s=int(input("Enter the roll no you want to search::"))
with open("student.dat","rb") as q:
    rec=pickle.load(q)
    for i in rec:
        if i==s:
            print(f"The name of the student having roll no {i} is {rec[i]}")
            flag=False
            break

if flag:
    print("record not found")