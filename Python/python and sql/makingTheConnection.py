import mysql.connector as c
con=c.connect(host="localhost", user="root",passwd="ariana", database="employee")
if con.is_connected():
    print("Sucessfully Connected.......")