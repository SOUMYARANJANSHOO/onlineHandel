'''Write a Python program to count total number of words in a string'''
while True:   
    str1=input("Enter the string:")
    count=0
    for i in range(len(str1)):
        if (str1[i]==' ' or str1[i]=='\n' or str1[i]=='\t'):
            count += 1
    print("The number of chracters in the string is:",count)
