#5. Write a Python program to calculate the amount payable if money has been
#lent on simple interest. (Hint- Amount Payable=Principal+SI)

principal = float(input("enter the principal"))
rate = float(input("enter the rate of intrest"))
time = float(input("enter the time annually"))

si = (principal*rate*time)/100
amount = principal + si
print("the payable amount is", amount)