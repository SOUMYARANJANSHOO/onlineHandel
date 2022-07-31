"""
Write a python program using function to pass list to a function and double the odd values and half even values of a list and display list element after changing.
"""

#defining function
def splitevenodd(List):  
   evenlist = []  
   oddlist = []  
   for i in List:  
      if (i % 2 == 0):  
         evenlist.append(i//2)  #storing half value in evenlist
      else:  
         oddlist.append(i*i)  #storing double value in oddlist
   print("Even lists:", evenlist)  
   print("Odd lists:", oddlist)  

#taking input list   
List=list() 
n=int(input("Enter the size of the  List ::")) 
for i in range(int(n)): 
   k=int(input("Enter the Elements of  List ::")) 
   List.append(k) 
splitevenodd(List) #calling the function