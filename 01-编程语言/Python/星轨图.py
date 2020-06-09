import turtle, random
pen = turtle.Pen()
pen.speed(0)
pen.penup()
pen.goto(-400, -400)
pen.pendown()

# 黑夜
pen.fillcolor('black')
pen.begin_fill()
for i in range(4):
    pen.fd(800)
    pen.left(90)
pen.end_fill()
pen.goto(0,0)

# 星轨
for i in range(100):
    pen.pencolor('SkyBlue')
    pen.penup()
    pen.right(random.randint(0, 360))
    r = random.randint(50, 350)
    pen.fd(r)
    pen.down()
    pen.left(90)
    pen.circle(r, 60)
    pen.penup()
    pen.goto(0, 0)

# 星星
for i in range(100):
    pen.penup()
    pen.goto(0,0)
    pen.pencolor(random.uniform(0.5, 1), random.uniform(0.5, 1), random.uniform(0.5, 1))
    pen.goto(random.randint(-400, 400), random.randint(-400, 400))
    pen.pensize(random.randint(1, 3))
    pen.pendown()
    pen.fd(random.randint(1, 3))
turtle.done()
