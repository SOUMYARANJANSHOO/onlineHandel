import turtle
sam = turtle.Turtle()
sam.speed(10)

sam.color("blue","red")
sam.begin_fill()
sam.forward(150)
sam.right(120)
sam.forward(150)
sam.right(120)
sam.forward(150)
sam.end_fill()

sam.color("blue","green")
sam.begin_fill()
sam.right(60)
sam.forward(150)
sam.right(120)
sam.forward(150)
sam.end_fill()

sam.color("blue","yellow")
sam.begin_fill()
sam.forward(150)
sam.right(120)
sam.forward(150)
sam.end_fill()

sam.color("blue","pink")
sam.begin_fill()
sam.forward(150)
sam.right(120)
sam.forward(150)
sam.right(120)
sam.end_fill()


turtle.done()