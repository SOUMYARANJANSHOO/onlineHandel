"""
Write a python program to search first occurrence of an element in a list by using Linear search and display frequency of each element present in list [List and search element should be entered by user]
"""
# taking input
List = []
n = int(input("How many items do you want to enter in list::"))
for i in range(n):
    a = (input("Enter the element::"))
    List.append(a)
print("The list you entered is::", List)


element = input("Enter the elament you want to search::")
flag = True
for i in range(n):
    if List[i] == element:
        print(f"The element is found at {i} index and the position is {i+1}.")
        flag = False
        break
if flag:
    print("Element not found")

D1 = {}
for x in List:
    if x in D1:
        D1[x] += 1
    else:
        D1[x] = 1
for y in D1:
    print(f"The number of time {y} present in the list is {D1[y]}")
