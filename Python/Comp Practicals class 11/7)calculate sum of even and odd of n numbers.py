'''Write a Program in python to calculate and print the sums of even and  odd integers of the first n natural numbers'''
#taking variables for calculations of the sum of the even and odd no 
lastnum = int(input("Enter the number upto which you wanna to count:"))
evecount=0
oddcount=0

#starting the loop
for i in range(1,lastnum+1):
    if (i%2==0):
        evecount += i
    else:
        oddcount += i

#printing the results
print("The sum of the first even natural numbers upto",lastnum,"is:",evecount)
print("The sum of the first odd natural numbers upto",lastnum,"is:",oddcount)
input()
