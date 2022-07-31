""" Program 9-1 Program to increment the elements of a
list. The list is passed as an argument to
a function. """

#Program 9-1
#Function to increment the elements of the list passed as argument
def increment(list2):
    for i in range(0,len(list2)):
#5 is added to individual elements in the list
        list2[i] += 5
    print('Reference of list Inside Function',id(list2))
#end of function
list1 = [10,20,30,40,50] #Create a list
print("Reference of list in Main",id(list1))
print("The list before the function call")
print(list1)
increment(list1) #list1 is passed as parameter to function
print("The list after the function call")
print(list1)


# solving without using any function
list1 = [10,20,30,40,50] #Create a list
print("Reference of list in Main",id(list1))
print("The list before the function call")
print(list1)
for i in range(len(list1)):
    list1[i] += 5
print("The list after increment is")
print("Reference of the list in main",id(list1))
print(list1)