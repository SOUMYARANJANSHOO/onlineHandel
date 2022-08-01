"""Riya has a list containing 8 integers. You need to help her create a program with two user defined functions to perform the following operations based on this list. 
●push those numbers into a stack which are divisible by both 5 and 3. 
●Pop and display the content of the stack.
For example the following list: [5,15,21,30,45,50,60,75] 
And should display: 75 60 45 30 15"""

#input list
list1=[5,15,21,30,45,50,60,75]

#defining the stack
stack=[]

#defining the function
def push(stack,list1):
    for element in list1 :
        if element%5==0 and element%3==0:
            stack.append(element)

def pops(stack):
    if len(stack)==0:
        print("THE STACK IS EMPTY")
    else :
        print("THE CONTAIN OF THE STACK ARE::")
        for i in range(len(stack)):
            print(stack.pop())

#calling all the functions
push(stack,list1)
pops(stack)