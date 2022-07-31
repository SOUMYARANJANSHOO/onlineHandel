"""
Write a python program using function to pass list to a function and double the odd values and half even values of a list and display list element after changing.
"""

List=[]
n=int(input("Enter the number of element you want to enter::"))
for i in range(n):
    a=input("Enter the elemrnt::")
    List.append(a)
print("The list you entered is ",List)


for x in List:
    if x%2==0:
        x/=2
    else:
        x*=2

print("The final List is ",List)