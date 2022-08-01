# amount = p*[1+(r/100)]**t/n
# and ci = amount - principle
# where p=principle, r=rate, t=time ...........

#getting the inputs......
p = float(input("Enter the principal:"))
r = float(input("Enter the rate of intrests anually:"))
t = int(input("Enter the no of years :"))

#defining the function
def CI(x,y,z):
    amount= x*(pow((1+ y/100), z))
    comp_intrest = amount - x 
    print("The compound intrest is", comp_intrest)
    print("The compound amount is ", amount)

CI(p,r,t)