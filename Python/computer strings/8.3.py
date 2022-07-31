'''Program 8-3 Write a program to input a string from
the user and print it in the reverse order
without creating a new string'''
#Program 8-3
#Program to display string in reverse order
st = input("Enter a string: ")
for i in range(-1,-len(st)-1,-1):
    print(st[i],end='')
print("\n")

# solving in other way:-
st = input("Enter a string: ")
print(f"The string in revers order is : {st[::-1]}")