default_unit = "cm"

def greet_user():
    print("Welcome to the Shapes Module!")


class Rectangle:

    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        print("Area : ", self.length * self.width, default_unit)