"""3.Write a Menu Driven program in python to Work with Stack depending on Choice Code 1/2/3/4  as stated below-				
        MENU
    1   Push in Stack
    2   Pop out From Stack
    3   Display the Stack
    4   Exit
Display Appropriate massage On   
    1. Wrong Choice Code 
    2. For Empty Stack """
sTACK=[]
#defining push,pop and display
def pUSH(stackName,element):
    stackName.append(element)
def pOP(stackName):
    if len(sTACK)==0:
        print("::STACK IS EMPTY::")
    else:
        print(stackName.pop(),"IS SUCESSFULLY POPED")
def dISPLAY():
    if len(sTACK)==0:
        print("::STACK IS EMPTY::")
    else:
        print("THE CONTAINT OF THE STACK ARE::")
        for i in sTACK :
            print(i)

while True:
    #desining the menu
    print("\t\tMENU")
    print("1)\tPUSH IN STACK")
    print("2)\tPOP OUT FROM STACK")
    print("3)\tDISPLAY THE STACK")
    print("4)\tEXIT")
    qUERY=int(input("ENTER THE CORESPONDING NUMBER FOR YOUR CHOOSEN STATEMENT::"))

    if qUERY==1:
        element =input("ENTER THE ELEMENT YOU WANT TO PUSH::")
        pUSH(sTACK, element)
    elif qUERY==2:
        pOP(sTACK)
    elif qUERY==3:
        dISPLAY()
    elif qUERY==4:
        exit()
    else:
        print("::WRONG CHOICE CODE::")
    print("*"*20)