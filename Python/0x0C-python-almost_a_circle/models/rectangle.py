#!/usr/bin/python3
from models.base import Base

class Rectangle(Base):
    def __init__(self, width, height, x=0, y=0, id=None):
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    @property
    def width(self):
        return self.__width
    @width.setter
    def width(self, width):
        if type(width) != int:
            raise TypeError('width must be an integer')
        if width <= 0:
            raise ValueError('width must be > 0')
        self.__width = width

    @property
    def height(self):
        return self.__height
    @height.setter
    def height(self, height):
        if type(height) != int:
            raise TypeError('height must be an integer')
        if height <= 0:
            raise ValueError('height must be > 0')
        self.__height = height

    @property
    def x(self):
        return self.__x
    @x.setter
    def x(self, x):
        if type(x) != int:
            raise TypeError('x must be an integer')
        if x < 0:
            raise ValueError('x must be >= 0')
        self.__x = x

    @property
    def y(self):
        return self.__y
    @y.setter
    def y(self, y):
        if type(y) != int:
            raise TypeError('y must be an integer')
        if y < 0:
            raise ValueError('y must be >= 0')
        self.__y = y

    def area(self):
        return (self.width * self.__height)

    def __str__(self):
        id = str(self.id)
        x = str(self.x)
        y = str(self.y)
        w = str(self.width)
        h = str(self.height)
        return '[Rectangle] (' + id + ') ' + x + '/' + y + ' - ' + w + '/' + h

    def display(self):
        for u in range(self.y):
            print()
        for i in range(self.area()):
            if i and not (i % self.width):
                print()
            if not (i % self.width):
                for l in range(self.x):
                    print(' ', end='')
            print('#', end='')
        print()

    def update(self, *args, **kwargs):
        count = 1
        if args and len(args):
            for arg in args:
                if count == 1:
                    self.id = arg
                elif count == 2:
                    self.width = arg
                elif count == 3:
                    self.height = arg
                elif count == 4:
                    self.x = arg
                elif count == 5:
                    self.y = arg
        else:
            for key, value in kwargs.items():
                if key == 'id':
                    self.id = value
                elif key == 'width':
                    self.width = value
                elif key == 'height':
                    self.height = value
                elif key == 'x':
                    self.x = value
                elif key == 'y':
                    self.y = value

    def to_dictionary(self):
        return {
            'id': self.id,
            'width': self.width,
            'height': self.height,
            'x': self.x,
            'y': self.y
        }    