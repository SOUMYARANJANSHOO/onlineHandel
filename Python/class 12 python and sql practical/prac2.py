#Write a program in python to create a stack “student” with details of student name and their marks. Write Operation for Push, Pop and Traversal operation using menu.

#defining stack
sTUDENT=[]

#defining push,pop and transversal
def pUSH(stackName,studenName,mARKS):
    stackName.append({studenName:mARKS})
def pOP(stackName):
    if len(sTUDENT)==0:
        print("::STACK IS EMPTY::")
    else:
        print(stackName.pop(),"IS SUCESSFULLY POPED")
def tRANSVERSAL():
    if len(sTUDENT)==0:
        print("::STACK IS EMPTY::")
    else:
        print("THE CONTAINT OF THE STACK ARE::")
        for i in sTUDENT :
            print(i)


while True:
    #desining the menu
    print("\t\tMENU")
    print("1)\tPUSH IN STACK")
    print("2)\tPOP OUT FROM STACK")
    print("3)\ttRANSVERSAL THE STACK")
    print("4)\tEXIT")
    qUERY=int(input("ENTER THE CORESPONDING NUMBER FOR YOUR CHOOSEN STATEMENT::"))

    if qUERY==1:
        studentName =input("ENTER THE NAME OF THE STUDENT::")
        mARKS =int(input("ENTER THE MARKS OF THE STUDENT::"))
        pUSH(sTUDENT, studentName,mARKS)
    elif qUERY==2:
        pOP(sTUDENT)
    elif qUERY==3:
        tRANSVERSAL()
    elif qUERY==4:
        exit()
    else:
        print("::WRONG CHOICE CODE::")
    print("*"*20)