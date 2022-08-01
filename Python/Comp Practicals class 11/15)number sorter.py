'''Write a program to read a list of n integers (positive as well as negative).  Create two new lists, one having all positive numbers and the other  having all negative numbers from the given list. Print all '''
n=int(input("How many numbers you want to enter in the list:"))
normallist = []
positivelist = []
negativelist = []

#making the main list
for i in range(n):
    num=int(input("Enter the number:"))
    normallist.append(num)

#sorting the numbers in list
for i in range(n):
    if normallist[i]>=0:
        positivelist.append(normallist[i])
    else:
        negativelist.append(normallist[i])

print("The list of all numbers is\n",normallist)
print("The list of positive numbers is\n",positivelist)
print("The list of negative numbers is\n",negativelist)
input()
