"""
Write a Menu driven program in python to count spaces, digits, words and lines from text file try.txt
"""
while True:
    print('*** MENU ***')
    print('1:count spaces')
    print('2:count digits')
    print('3:count words')
    print('4:count lines')
    print('5:exit')
    choice=int(input('Enter your choice:'))
    if choice==1:
        File=open("dig.txt","r")
        spaces=0
        f=File.read()
        for i in f:
            if i.isspace():
                spaces+=1
        print("The number of spaces is",spaces)
        File.close()
    elif choice==2:
        File=open("dig.txt","r")
        digits=0
        f=File.read()
        for i in f:
            if i.isdigit():
                digits+=1
        print("The number of digits is",digits)
        File.close()
    elif choice==3:
        File=open("dig.txt","r")
        f=File.read()
        # print(f)
        words=len(f.split())
        print("The number of words is",words)
        File.close()
    elif choice==4:
        File=open("dig.txt","r")
        f=File.readlines()
        lines=len(f)
        print("The number of lines is",lines)
        File.close()
    
    