"""
Write a program to read a list of n integers (positive as well as negative). Create two new lists, one having all positive numbers with sum and the other having all negative numbers with sum from the given list.
"""
posnum=[]
posnumsum=0
negnum=[]
negnumsum=0

List = []
n=int(input("Enter the size of the  List ::")) 
for i in range(int(n)): 
   k=int(input("Enter the Elements of  List ::")) 
   List.append(k) 
print("The original list you have entered is:",List)

for i in range(len(List)):
    if List[i]>=0:
        posnum.append(List[i])
        posnumsum+=1
    else :
        negnum.append(List[i])
        negnumsum+=1

print("The negetive number list is :",negnum)
print("The sum of the negetive numbers :",negnumsum)
print("The positive number list is :",posnum)
print("The sum of the positive numbers :",posnumsum)