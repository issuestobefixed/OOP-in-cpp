class Student:
    
    def __init__(self, name, roll_number, grade):
        self.name = name                  #Public
        self._roll_number = roll_number   #Protected
        self.__grade = grade              #Private

    def get_grade(self):
        return self.__grade


student1 = Student("Arham", 2084, "A")


# 1. Public attribute, printing directly
print("Name:", student1.name)


# 2. Protected attribute, printing directly
print("Roll Number:", student1._roll_number)


# 3. Trying to access private attribute, printing directly
try:
    print("Grade:", student1.__grade)

except AttributeError:
    print("Cannot access __grade directly from outside the class.")


# 4. Accessing private attribute using the public method
print("Grade using get_grade():", student1.get_grade())


# 5. Accessing private attribute using name mangling
print("Grade using name mangling:", student1._Student__grade)