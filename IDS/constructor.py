class Cat:
    
    def __init__(self):
        self.name=None
        self.fur=None
        self.age=None
        print("New Cat is Here")
    
    def __str__(self):
        return f"{self.name} is a {self.fur} cat, whose age is {self.age}."
    
    
c1=Cat()

c1.name=input("Enter name of cat : ")
c1.fur=input("Enter color of fur : ")
c1.age=input("Enter age of cat : ")

print(c1)