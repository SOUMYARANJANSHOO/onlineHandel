'''Write a program in python which accepts number of days as integer and  display total number of years, months and days in it. 
For example: if user input as 856 days the output should be 2 years 4  months 6 days
'''
#while will ensure the continuity of the code
while True:
    days=int(input("Enter the numbers of days:"))
    years=days//365 #ignoring the leap year
    months= (days-(years*365))//30
    days=(days-((years*365)+(months*30)))
    print("The number of year=",years,"\nThe numbers of months=",months,"\nThe numbers of days=",days)