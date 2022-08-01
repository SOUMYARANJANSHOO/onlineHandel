#Write a program in Python to create a stack name StackVow, which takes the elements as vowels and implement all oprations (Push, POP and Traversal) on stack StackVow

# defining stack StackVow
StackVow=[]

#defining push, pop and traversal function
def pUSH(StackVow,vOWELS):
    if vOWELS in ('a','e','i','o','u'):StackVow.append(vOWELS)
def pOP(StackVow):
    if len(StackVow)==0:
        print("::STACK IS EMPTY::")
    else:
        print(StackVow.pop(),"IS SUCESSFULLY POPED")
def tRANSVERSAL():
    if len(StackVow)==0:
        print("::STACK IS EMPTY::")
    else:
        print("THE CONTAINT OF THE STACK ARE::")
        for i in StackVow :
            print(i)

while True:
    #desining the menu
    print("\t\tMENU")
    print("1)\tPUSH IN STACK")
    print("2)\tPOP OUT FROM STACK")
    print("3)\tTRANSVERSAL THE STACK")
    print("4)\tEXIT")
    qUERY=int(input("ENTER THE CORESPONDING NUMBER FOR YOUR CHOOSEN STATEMENT::"))

    if qUERY==1:
        vOWELS =input("ENTER THE ELEMENT YOU WANT TO PUSH::")
        pUSH(StackVow, vOWELS)
    elif qUERY==2:
        pOP(StackVow)
    elif qUERY==3:
        tRANSVERSAL()
    elif qUERY==4:
        exit()
    else:
        print("::WRONG CHOICE CODE::")
    print("*"*20)