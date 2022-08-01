"""
Write a Python program input n numbers in tuple and count how many even and odd numbers are entered. 
"""
tup=[]
n=int(input("Enter the number of element you want to enter::"))
for i in range(n):
    a=int(input("Enter the elemrnt::"))
    tup.append(a)
tup=tuple(tup)
print("The list you entered is ",tup)

evecount=0
oddcount=0
for x in tup :
    if x%2==0:
        evecount+=1
    else:
        oddcount+=1
print(f"The number of even numbers are {evecount} and the number of odd numbers are {oddcount}")