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
        File=open("data.txt", 'r')
        space_count=0
        F=File.read()
        for letter in F:
            if( letter.isspace( )):
                space_count=space_count+1
        print('No. of spaces are:',space_count)
        File.close()
    if choice==2:
        digit_count=0
        File=open("data.txt", 'r')
        F=File.read()
        for letter in F:
            if( letter.isdigit( )):
                digit_count=digit_count+1
        
        print('No. of digits are:',digit_count)
        File.close()
    if choice==3:
        File=open("data.txt","r")
        linesList=File.readlines()
        words_count=0
        for line in linesList: 
            wordsList=line.split()
            print(wordsList) 
            words_count  = words_count + len(wordsList)
        print("The number of words in this file are : ",words_count)
        File.close()
    if choice==4:
        lines_count =0
        File=open("dig.txt","r")
        data=File.readlines()
        for line in data:
            lines_count=lines_count+1
        print("Number of lines  : " ,lines_count)
        File.close()
    if choice==5:
        break