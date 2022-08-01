'''Write a Program in python to input two numbers and print their  LCM(Least Common Multiple).'''
while True:
    num1 = int(input("Enter the first number:"))
    num2 = int(input("Enter the second number:"))
    lcm=0
    if num1 > num2:
        greater = num1
    else:
        greater = num2

    while(True):
        if((greater % num1 == 0) and (greater % num2 == 0)):
            lcm=greater
            print("The L.C.M. is",lcm)
            break
        greater += 1
