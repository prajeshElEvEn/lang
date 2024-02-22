# super
# used to access attributes methods of parent class

class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print("Some generic sound")


class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name)  # Call the __init__ method of the parent class
        self.breed = breed

    def make_sound(self):
        super().make_sound()
        # print("Woof!")


# Create an instance of the Dog class
my_dog = Dog(name="Buddy", breed="Golden Retriever")

# Accessing attributes from both parent and child classes
print(my_dog.name)    # Output: Buddy
print(my_dog.breed)   # Output: Golden Retriever

# Call the overridden method in the child class
my_dog.make_sound()   # Output: Woof!
