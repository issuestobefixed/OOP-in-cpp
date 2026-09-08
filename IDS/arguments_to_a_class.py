class Cat:
    
    def __init__(self, name, color, age):
        self.name=name
        self.color=color
        self.age=age
        print(f"New cat {self.name} is here, and his color is {self.color}, and he is {self.age} years old.")
        
c1=Cat("Tom","White", 2)
