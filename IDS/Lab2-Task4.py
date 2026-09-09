# Part A
print("Part A")
class Camera:
    
    def take_photo(self):
        print("Taking a photo")


class PhoneFeatures:

    def make_call(self):
        print("Making a call")


class SmartPhone(Camera, PhoneFeatures):
    pass


phone = SmartPhone()

phone.take_photo()
phone.make_call()

# Part B
print("Part B")
class Circle:
    
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159 * self.radius * self.radius


class Square:

    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side * self.side


circle = Circle(5)
square = Square(4)

shapes = (circle, square)

for shape in shapes:
    print(shape.area())