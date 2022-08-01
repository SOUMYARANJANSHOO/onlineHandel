"""
Write a menu driven python program to create a CSV file by entering dept-id, name and city, read and search the record for given dept-id.
MENU
1. Create csv
2. Search record as per dept no
3.Exit 
"""

import csv
while True:
    print('*** MENU ***')
    print('1: create csv file')
    print('2: Search as per id')
    print('3: Exit')
    choice=int(input('Enter your choice:'))
    if choice==1:
        f=open("dept.csv","w")
        writer=csv.writer(f,delimiter=',')
        n = int(input("Enter the number of rows you want to enter::"))
        for n in range(n):
            dept_no =int(input('Enter dept no:'))
            name =input('Enter dept name:')
            city =input('Enter city:')
            writer.writerow([dept_no,name,city])
        print('Record Successfully Saved')
        f.close()
    elif choice==2:
        f=open('dept.csv','r',newline='\r\n')
        id=input("Enter the deptid  you want to enter :")
        s=csv.reader(f)
        for rec in s:
            # print(rec)
            if rec[0]==id:
                print("Dept-id",rec[0])
                print("Name=",rec[1])
                print("City=",rec[2])
        f.close()
    if choice==3:
        break
