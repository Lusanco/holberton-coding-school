#!/usr/bin/python3
"""
Module Name: 5-rectangle
Description: Defines a Rectangle, returns
area, perimeter and rectangle #
Authors: Lusanco

Print the message Bye rectangle... (... being 3 dots not ellipsis) when an instance of Rectangle is deleted
You are not allowed to import any module

guillaume@ubuntu:~/$ cat 5-main.py
#!/usr/bin/python3
Rectangle = __import__('5-rectangle').Rectangle

my_rectangle = Rectangle(2, 4)
print("Area: {} - Perimeter: {}".format(my_rectangle.area(), my_rectangle.perimeter()))

del my_rectangle

try:
    print(my_rectangle)
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))

guillaume@ubuntu:~/$ ./5-main.py
Area: 8 - Perimeter: 12
Bye rectangle...
[NameError] name 'my_rectangle' is not defined
guillaume@ubuntu:~/$
"""


class Rectangle:
    """Defines a Rectangle, returns area, perimeter and rectangle #"""

    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height

    @property
    def width(self):
        return self.__width

    @width.setter
    def width(self, value):
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        elif value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        return self.__height

    @height.setter
    def height(self, value):
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        elif value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        return self.__height * self.__width

    def perimeter(self):
        if self.height == 0 or self.width == 0:
            return 0
        else:
            return (self.__height * 2) + (self.width * 2)

    def __str__(self) -> str:
        rect_str = ""
        if self.width == 0 or self.height == 0:
            return rect_str
        for _ in range(self.height):
            rect_str += "#" * self.width + "\n"
        return rect_str.strip()

    def __repr__(self) -> str:
        return f"Rectangle({self.width}, {self.height})"

    def __del__(self):
        print(f"Bye rectangle...")
