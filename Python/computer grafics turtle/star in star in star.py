import turtle
sam = turtle.Turtle()
sam.speed(1000)

sam.getscreen().bgcolor("red")

def star(turtle,size):
    if size <= 10:
        return
    else:
        for i in range(5):
            turtle.forward(size)
            star(turtle,size/3)
            turtle.left(216)

star(sam,360)
turtle.done()