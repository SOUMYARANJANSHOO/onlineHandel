"""
Write a Python program input n numbers in tuple and count how many even and odd numbers are entered. 
"""

#defining the function
def eveoddcount(tup):
    evecount=0
    oddcount=0
    for i in range(0,len(tup)): #loop for counting no of even and odd numbers
        if i%2==0 :
            evecount+=1
        else :
            oddcount+=1
    print(f"The number of even numbers are :{evecount}\nThe number of odd numbers are :{oddcount}")


tup=[]  #temporarily defining list to take input
n=int(input("Enter the number of elements you want to enter::"))
for i in range(0,n):
    a=int(input("Enter the element::"))
    tup.append(a)
tup=tuple(tup)  #typecasting list into tuple
print("You entered ",tup)
eveoddcount(tup)  #calling the function 