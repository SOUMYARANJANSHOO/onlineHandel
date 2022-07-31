"""
Write a python program to search first occurrence of an element in a list by using Linear search and display frequency of each element present in list [List and search element should be entered by user]
"""

#Taking list as input
List = []  # var for entered list
count = 0  # no of occurence of element
n = int(input("How many items do you want to enter in list:"))
for i in range(0, n):
    a = int(input("Enter the item:"))
    List.append(a)
print("This is the entered list :", List)

#storing frequency and elements in a dictionary
Dict = {}  # for storing elements along with frequency
for i in List:
    count = 0
    for j in List:
        if i == j:
            count += 1
    Dict[i] = count
for k in Dict:  # decoding the dictionary
    # printing elements with frequency
    print("The frequency of ", k, " is ", Dict[k])

#linearsearching for finding position and index of the entered value
element = int(input("Enter item to be search:"))
flag = 0  # no of occurence of element to be search
for i in range(0, n):
    if (element >= 0) and (element <= n):  # checking for valid input
        if (element == List[i]):
            flag = 1
            break
if (flag == 1):
    print("Element found at index", i, "and position", i+1)
else:
    print("Element not found")
