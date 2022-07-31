'''Write a program to search the position of a number in a given list'''
n =int(input("How many numbers you want to enter in the list:"))
lst1=[]

for i in range(n):
    num=input("Enter the character:")
    lst1.append(num)

character=input("Enter the character you want to search:")

position=(lst1.index(character))+1
print("The character",character,"is in the ",position,"ᵗʰ position")