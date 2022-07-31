# 4.Write a program to connect Python with MySQL using database connectivity and perform the following operations on data in database: Create a table, Insert the data ,Fetch the data ,update the data ,delete the data.
import mysql.connector as c

# databasePassword = input("ENTER THE PASSSWORD OF YOUR SQL PROGRAM::")
# databaseName = input("ENTER THE DATABASE NAME::")
con = c.connect(host="localhost", user="root",
                passwd= "ariana", database="employee")
cursor = con.cursor()
while True:
    print("\t\tMENU")
    print("1)\tCREATE A TABLE")
    print("2)\tINSERT DATA")
    print("3)\tFETCH THE DATA ")
    print("4)\tDELETE THE DATA")
    print("5)\tEXIT")
    qUERY = int(
        input("ENTER THE CORESPONDING NUMBER FOR YOUR CHOOSEN STATEMENT::"))

    if qUERY == 1:
        command = "create table kanha(EMPID INT,NAME VARCHAR(30),DEPTID INT,MOBILE_NO CHAR(10))"
        cursor.execute(command)
        con.commit()
    elif qUERY == 2:
            # tableName = input("ENTER THE NAME OF THE TABLE::")
            # empId = int(input("Enter the empId::"))
            # name = input("Enter the name::")
            # deptId = input("Enter the department id::")
            # mobileNumber = input("Enter the mobile number::")
            query1 = "insert into kanha values(101,'Soumyaranjan',1101,9874563726)"
            query2 = "insert into kanha values(102,'Uttam',1103,8260963609)"
            cursor.execute(query1)
            # con.commit()
            cursor.execute(query2)
            con.commit()
            continue
    elif qUERY == 3:
        # print("PLEASE CHOOSE ONE OPTION FROM THE FOLLOWING")
        # print("1)\tEXTRACT ONLY ONE ROW")
        # print("2)\tEXTRACT MANY ROWS")
        # print("3)\tEXTRACT ALL ROWS")
        # choose = int(input("ENTER YOUR CHOICE::"))
        cursor.execute("select * from kanha")
        # if choose == 1:
        #     print(cursor.fetchone())
        # elif choose == 2:
        #     n = int(input("ENTER THE NUMBER OF ROWS YOU WANT TO EXTRACT::"))
        #     print(cursor.fetchmany(size=n))
        # elif choose == 3:
        print(cursor.fetchall())
        # else:
        #     print("ENTER A VALID INPUT")
        #     continue
    elif qUERY == 4:
        cursor.execute("delete from kanha")
    elif qUERY == 5:
        exit()
    else:
        print("ENTER A VALID INPUT")
