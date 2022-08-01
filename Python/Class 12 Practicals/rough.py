# Write a Menu driven program in python to count spaces, digits, words and lines from text file try.txt

file_name = input("Enter the name of the file:")
count_space=count_digits=count_words=count_lines=0

while True :
    print('**************MENU****************')
    print('choose from the following options:')
    print('1.Spaces')
    print('2.digits')
    print('3.words')
    print('4.lines')
    print('5.end program')
    print('**********************************')
    query=int(input("Enter the option:"))
    if query==1:
        data = open(file_name,"r")
        content1 = data.read()
        for i in content1:
            if i.isspace():
                count_space+=1
        data.close()
        print("The number of spaces is ::",count_space)
    elif query==2:
        data = open(file_name,"r")
        content1 = data.read()
        for i in content1:
            if i.isdigit():
                count_digits+=1
        data.close()
        print("The number of digits is ::",count_digits)
    elif query==3:
        data = open(file_name,"r")
        content1 = data.read()
        count_words=len(content1.split())
        data.close()
        print("The number of words is ::",count_words)
    elif query==4:
        data = open(file_name,"r")
        content2 = data.readlines()
        count_lines=len(content2)
        data.close()
        print("The number of lines is ::",count_lines)
    else:
        print("Thankyou for using our program")
        exit()
