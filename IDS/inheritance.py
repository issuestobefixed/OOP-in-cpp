class Animal:
    
    def talk(self):
        print("I'm not human")
         
class Cat(Animal):
    
    def talk(self):
        super().talk()
        print("Meow")
        
tom=Cat()
tom.talk()