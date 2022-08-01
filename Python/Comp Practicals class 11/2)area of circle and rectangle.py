'''WAP TO FIND THE AREA OF CIRCLE AND RECTANGLE'''
#This prog will find the area of the chosen figure

#this block of code will ensure the continuity
while True:

    #this block of code will ask for the fig the user wanted to fnd the area of
    print("Write rec to calculate the area of the rectangle or write cir to calculate the area of the circle")
    fig = str(input("Enter the name of the fig:"))

    #Writing the logic
    if fig == "rec":
        length = float(input("Enter the magnitude of length of the Rectangle(in m):"))
        breadth = float(input("Enter the magnitude breadth of the Rectangle(in m):"))
        area = float(length*breadth)
        print("The area of the Rectangle is",area,"m²")
    else:
        radius = float(input("Enter the radius of the Circle(in m):"))
        area = float(3.14*radius*radius)
        print("The area of the Circle is",area,"m²")