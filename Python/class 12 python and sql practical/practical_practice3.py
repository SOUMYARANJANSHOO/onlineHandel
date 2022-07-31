"""Write a program to implement stack for book-details (bookno, book name). That is,  each item node of the stack contains two types of information- a bookno and its name. Just implement Push and display operations."""

#input list
details=[(101,"NCERT mathematics"),(102,"NCERT physics"),(103,"NECRT chemisrty")]

#defining the stack
book_details=[]

#defining the function
def push(book_details,details):
    for element in details :
        book_details.append(element)

def pops(book_details):
    if len(book_details)==0:
        print("THE STACK IS EMPTY")
    else :
        print("THE CONTAIN OF THE STACK ARE::")
        for i in range(len(book_details)):
            print(book_details.pop())

#calling all the functions
push(book_details,details)
pops(book_details)