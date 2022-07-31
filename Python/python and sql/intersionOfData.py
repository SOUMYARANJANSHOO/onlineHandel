import mysql.connector as c
con=c.connect(host="localhost",user="root",passwd="ariana",database="employee")
cursor=con.cursor()
while True:
    code=int(input("Enter the code::"))
    name=input("Enter the name::")
    salary=int(input("Enter the salary::"))
    query="insert into employee values({},'{}',{})".format(code,name,salary)
    cursor.execute(query)
    con.commit()
    want=input("wanna add more[y/n]::")
    if want=="n" :
        break