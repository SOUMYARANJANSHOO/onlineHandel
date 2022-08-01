"""
Write a Python program to remove duplicates from a list. 
"""
List=[]
n=int(input("Enter the size of the  List ::")) 
for i in range(int(n)): 
   k=int(input("Enter the Elements of  List ::")) 
   List.append(k) 
print("The original list you have entered is:",List)

filtered_list=[]
duplicate_list=[]

for i in List:
    if i in filtered_list:
        filtered_list.append(i)
        duplicate_list.append(i)
    else:
        duplicate_list.append(i)

print("The filtered list is ",filtered_list)
print("The duplicate list is ",duplicate_list)