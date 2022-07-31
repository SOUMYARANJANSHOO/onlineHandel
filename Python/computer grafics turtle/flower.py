import turtle
sam = turtle.Turtle()
sam.speed(10)

sam.color("blue","red")
sam.begin_fill()
for i in range(24):
    sam.forward(300)
    sam.left(165)
    
sam.end_fill()

turtle.done()