"""
CSC 134, M6LAB1
Alyssa Y.
12/1/25
Buckshot Roulette.
"""

"""
Note: All this code was written in the Python Sandbox at pythonsandbox.com/turtle and copy & pasted here.
"""


import turtle
win = turtle.Screen()
t = turtle.Turtle()

# Customizing 
t.pensize(4)
t.pencolor("pink")
t.shape("turtle")

# First - Flower
t.penup()
t.goto(-150, -150)
t.pendown()
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)
t.setheading(55)
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)
t.setheading(110)
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)
t.setheading(165)
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)
t.setheading(220)
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)
t.setheading(275)
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)
t.setheading(315)
for petal in range(1):
  t.circle(50, 60)
  t.left(120)
  t.circle(50,60)
  t.left(180 - 60)

# Second - Star
t.penup()
t.goto(150, 150)
t.pencolor("yellow")
t.pendown()
for star in range(5):
  t.forward(100)
  t.right(144)
  
# Third - Spiral
t.penup()
t.goto(-150, 150)
t.pencolor("orange")
t.pendown()
for spiral in range(50):
  t.forward(spiral)
  t.circle(5,50)

# Fourth - Polygon
t.penup()
t.goto(150, -150)
t.pencolor("blue")
t.pendown()
sides = 5
for penta in range (sides):
  t.forward(50)
  t.right(360/sides)

# Fifth - Initials
t.penup()
t.goto(-100, -5)
t.pencolor("purple")
t.pendown()

# Fifth - Initials (Pt. 1)
t.setheading(90)
t.forward(50)
t.setheading(0)
t.forward(40)
t.setheading(270)
t.forward(50)
t.setheading(90)
t.forward(35)
t.setheading(180)
t.forward(40)

#Fifth - Initials (Pt. 2)
t.penup()
t.goto(-50, -5)
t.pendown()
t.forward(1)

#Fifth - Initials (Pt. 3)
t.penup()
t.goto(-25, -5)
t.pendown()
t.setheading(90)
t.forward(35)
t.setheading(135)
t.forward(20)
t.setheading(315)
t.forward(20)
t.setheading(45)
t.forward(20)

#Fifth - Initials (Pt. 4)
t.penup()
t.goto(-0, -5)
t.pendown()
t.setheading(180)
t.forward(1)

#Fifth - Initials (Pt. 5)
t.penup()
t.goto(15, -5)
t.pendown()
t.setheading(90)
t.forward(1)
t.penup()
t.goto(15, 5)
t.pendown()
t.forward(40)

t.penup()
t.goto(25, -5)
t.pendown()
t.setheading(90)
t.forward(1)
t.penup()
t.goto(25, 5)
t.pendown()
t.forward(40)

t.penup()
t.goto(35, -5)
t.pendown()
t.setheading(90)
t.forward(1)
t.penup()
t.goto(35, 5)
t.pendown()
t.forward(40)

t.penup()
t.goto(0, -50)