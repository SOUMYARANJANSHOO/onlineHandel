""" Program 9-4 A program to calculate average marks of
n students using a function where n is
entered by the user. """

#Program 9-4
#Function to calculate average marks of n students
def computeAverage(list1,n):
    #initialize total
    total = 0
    for marks in list1:
        #add marks to total
        total = total + marks
    average = total / n
    return average
#create an empty list
list1 = []
print("How many students marks you want to enter: ")
n = int(input())
for i in range(0,n):
    print("Enter marks of student",(i+1),":")
    marks = int(input())
    #append marks in the list
    list1.append(marks)
average = computeAverage(list1,n)
print("Average marks of",n,"students is:",average)

#solving without creating a function
list1 = []
print("How many students marks you wanna enter:")
n=int(input())
for i in range(0,n+1):
    print(f"Enter marks of the student {i} :")
    marks = int(input())
    list1.append(marks)

total = 0
for marks in list1:
    total += marks
average = total/marks
print(f"Average marks of {n} students is {average}")