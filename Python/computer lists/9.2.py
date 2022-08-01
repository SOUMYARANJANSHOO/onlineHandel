""" Program 9-2 Program to increment the elements of the
list passed as parameter. """

#Program 9-2
#Function to increment the elements of the list passed as argument
def increment(list2):
    print("\nID of list inside function before assignment:",
id(list2))
    list2 = [15,25,35,45,55] #List2 assigned a new list
    print("ID of list changes inside function after assignment:",
id(list2))
    print("The list inside the function after assignment is:")
    print(list2)
#end of function
list1 = [10,20,30,40,50] #Create a list
print("ID of list before function call:",id(list1))
print("The list before function call:")
print(list1)
increment(list1) #list1 passed as parameter to function
print('\nID of list after function call:',id(list1))
print("The list after the function call:")
print(list1)

#solving the problem without creating a function
list1 = [10,20,30,40,50] #Create a list
print("ID of list before function call:",id(list1))
print("The list before function call:")
print(list1)

list2 = []
print("\nID of list inside function before assignment:",
id(list2))
list2 = [15,25,35,45,55] #List2 assigned a new list
print("ID of list changes inside function after assignment:",
id(list2))
print("The list inside the function after assignment is:")
print(list2)


print('\nID of list after function call:',id(list1))
print("The list after the function call:")
print(list1)