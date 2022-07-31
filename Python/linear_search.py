#program of liner search
T=(10,20,30,40,50,60,70,80,90,100)
n=len(T)
x=eval(input("Enter the element you want to search::"))
chiji=0
flag=True

for i in range(n):
	if x==T[i]:
		chiji=i
		flag=False
		break

if flag:
	print("The element is not found")
else:
	print("The element is found at index ",chiji)