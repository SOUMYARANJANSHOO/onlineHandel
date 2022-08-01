#program for stacks

#defining functions 

#function for push
def push(a,val):
    a.append(val)
#function for pop
def popItem(a):
    s=a.pop()
    print("Popped item is ::",s)
#function for peak
def peak(a):
    i=len(a)-1
    print("Last item is ::",a[i])
#function for displaying all items
def display(a):
    print("The containtent of the stack are::")
    for i in range(len(a)-1,-1,-1):
        print(a[i])

#__main__
a=[]
while True:
    print("Choose your option \n 1::To insert a value in the stack \n 2::To pop the last value \n 3::To peak the last value \n 4::To display the whole stack \n 5::To end the program")
    query=int(input("Enter your choice::"))

    if query==1:
        val=int(input("Enter the value you want to insert ::"))
        push(a, val)
    elif query==2:
        if len(a)==0:
            print("STACK UNDERFLOW!!!")
        else:
            popItem(a)
    elif query==3:
        if len(a)==0:
            print("STACK UNDERFLOW!!!")
        else:
            peak(a)
    elif query==4:
        if len(a)==0:
            print("NO ITEM IN THIS STACK!!!")
        else:
            display(a)
    else:
        break