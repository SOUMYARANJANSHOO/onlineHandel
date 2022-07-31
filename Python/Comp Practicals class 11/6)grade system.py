'''WAP TO OBTAIN THE GRADE OF STUDENTS'''
#This prog will obtain the grades of students on the basis of the marks obtained

#while will ensure the continuity of the code
while True:
    mark = float(input("Enter the marks obtained by the student:"))
    if mark<33:
        print("The grade is D")
    elif mark>=33 and mark<=44 :
        print("The grade is C")
    elif mark>=45 and mark<=59 :
        print("The grade is B")
    else :
        print("The grade is A")