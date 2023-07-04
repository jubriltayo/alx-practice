class Square:
    def __init__(self, size=0, position=(0, 0)):
        self.size = size
        self.position = position

    def area(self):
        return pow(self.__size, 2)

    @property
    def size(self):
        return self.__size
    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if (value < 0):
            raise ValueError("size must be >= 0")
        self.__size = value

    def my_print(self):
        if self.__size == 0:
            print()
        else:
            for i in range(pow(self.__size, 2)):
                if (i % self.__size == 0):
                    if (i != 0):
                        print()
                    for j in range(self.__position[0]):
                        print(' ', end='')
                print('#', end='')
            print()

    @property
    def position(self):
        return self.__position
    @position.setter
    def position(self, value):
        if not isinstance(value, tuple):
            raise TypeError("position must be a tuple of 2 positive integers")
        i, j = value #tuple unpacking
        if (i < 0) or (j < 0):
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = value

    def __str__(self):
        Square.my_print(self)
        return ""
    
    def __eq__(self, other):
        return self.__size == other.__size
    
    def __ne__(self, other):
        return self.area() != other.area()
    
    def __gt__(self, other):
        return self.__size > other.__size
    
    def __ge__(self, other):
        return self.area() >= other.area()
    
    def __lt__(self, other):
        return self.area() < other.area()
    
    def __le__(self, other):
        return self.area() <= other.area()