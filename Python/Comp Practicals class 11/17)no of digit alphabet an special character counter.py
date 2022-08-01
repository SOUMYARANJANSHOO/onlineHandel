'''write a program to accept the string count number of digit , alphabets and  other character''' 
string = input("Enter a string : ")
alphabets = digits = special = 0

for i in range(len(string)):
    if(string[i].isalpha()):
        alphabets+=1
    elif(string[i].isdigit()):
        digits+=1
    else:
        special+=1
        
print("Total number of Alphabets in this string:",alphabets)
print("Total number of Digits in this string:",digits)
print("Total number of Special Characters in this string:",special)
