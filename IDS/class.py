class Cat:
    name=None
    type=None
    fur=None
    color=None
    age=None
    
    def talk(self):
        print('Meow')
        
    def print_info(self):
        print("Name :", self.name)
        print("Type :", self.type)
        print("Fur :", self.fur)
        print("Color :", self.color)
        print("Age :", self.age)
        
c1=Cat()
c1.talk()

c1.age=10
c1.color='White'
c1.fur='Golden'
c1.name="Oscar"
c1.type="Persian"

c1.print_info()