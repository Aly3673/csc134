"""
CSC 134, M6LAB1
Alyssa Y.
12/1/25
Buckshot Roulette.
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