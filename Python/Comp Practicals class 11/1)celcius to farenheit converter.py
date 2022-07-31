'''WAP TO CONVERT TEMP FROM CELSIUS TO FAHRENHEIT'''
#this prog will convert the temp from celsius to fahrenheit

#while will ensure the continuity
while True:
    #this block of code will take the user input
    cel = float(input("Enter the celsius measure (only magnitude):"))

    #this block of code will calculate the result and store it in far variable
    far = float(((9*cel)/5)+32)

    #this block of code will print the result
    print("The fahrenheit measure is", far , "⁰F")