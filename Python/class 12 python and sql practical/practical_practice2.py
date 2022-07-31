"""Competent Couriers take user input for the name of the receiver and store these in a List which is then pushed to a stack called parcelstock. Write a program, with separate user defined functions to perform the following operations: 
●Push the Name of the receiver  into a stack using the function Push(parcelstock, Name). 
Pop and display the content of the stack."""



#input list
name=["soumya","swayam","shushree","shruti","ankit","amartya","omm","apurva","aditya"]

#defining the stack
parcelstock=[]

#defining the function
def Push(parcelstock,name):
    for element in name :
        parcelstock.append(element)

def pops(parcelstock):
    if len(parcelstock)==0:
        print("THE STACK IS EMPTY")
    else :
        print("THE CONTAIN OF THE STACK ARE::")
        for i in range(len(parcelstock)):
            print(parcelstock.pop())

#calling all the functions
Push(parcelstock,name)
pops(parcelstock)