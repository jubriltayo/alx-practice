#!/usr/bin/python3

def print_square(size):
    if not isinstance (size, int):
        raise TypeError('size must be an integer')
    elif size < 0:
        raise ValueError('size must be >= 0')
    elif (type(size) == float) and size < 0:
        raise TypeError('size must be an integer')
    elif size == 0:
        pass
    else:
        for i in range(size ** 2):
            if (i % size == 0) and i != 0:
                print()
            print('#', end='')
        print()