class Parent:
    
    def __init__(self, a):
        self.a = a
        print("Parent constructor")

    def greet(self):
        print("Hello from Parent")


class Child(Parent):

    def __init__(self, a, b, c):
        self.b = b
        self.c = c
        print("Child Constructor")
        super().__init__(a)

    def greet(self):
        print("Hello from Child")
        super().greet()


child1 = Child(10, 20, 30)

child1.greet()