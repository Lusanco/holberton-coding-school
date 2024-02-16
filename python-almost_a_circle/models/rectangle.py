#!/usr/bin/python3

"""
Module: rectangle
Descrip: Rectangle class
Authors: Lusanco
"""

from models.base import Base


class Rectangle(Base):
    """Rectangle class inherited from Base"""

    def __init__(self, width, height, x=0, y=0, id=None):
        """Initialize Rectangle with id, width, height, x, and y"""
        self.validator("width", width)
        self.validator("height", height)
        self.validator("x", x)
        self.validator("y", y)
        super().__init__(id)
        self.__width = width
        self.__height = height
        self.__x = x
        self.__y = y

    def area(self):
        """Calculate area of Rectangle"""
        return self.__width * self.__height

    def display(self):
        """Display '#' Rectangle"""
        for _ in range(self.__y):
            print()
        for fila in range(self.__height):
            print(str(" " * self.__x), end="")
            print(str("#" * self.__width))

    @property
    def height(self):
        """Getter for height attribute."""
        return self.__height

    @height.setter
    def height(self, value):
        """Setter for height attribute."""
        self.validator("height", value)
        self.__height = value

    def to_dictionary(self):
        """Dictionary representation of Rectangle"""
        return {
            "id": self.id,
            "width": self.width,
            "height": self.height,
            "x": self.x,
            "y": self.y,
        }

    def update(self, *args, **kwargs):
        """Update attributes based on the arguments provided."""
        attrs = ["id", "width", "height", "x", "y"]
        if args:
            for i, arg in enumerate(args):
                self.validator(i, arg)
                setattr(self, attrs[i], arg)
        else:
            for key, value in kwargs.items():
                self.validator(i, arg)
                setattr(self, key, value)

    def validator(self, flag, value):
        """Validation function for Rectangle"""
        if not isinstance(value, int):
            raise TypeError("{} must be an integer".format(flag))
        else:
            if (flag == "width" or flag == "height") and value <= 0:
                raise ValueError("{} must be > 0".format(flag))
            if (flag == "x" or flag == "y") and value < 0:
                raise ValueError("{} must be >= 0".format(flag))

    @property
    def width(self):
        """Getter for width attribute."""
        return self.__width

    @width.setter
    def width(self, value):
        """Setter for width attribute."""
        self.validator("width", value)
        self.__width = value

    @property
    def x(self):
        """Getter for x attribute."""
        return self.__x

    @x.setter
    def x(self, value):
        """Setter for x attribute."""
        self.validator("x", value)
        self.__x = value

    @property
    def y(self):
        """Getter for y attribute."""
        return self.__y

    @y.setter
    def y(self, value):
        """Setter for y attribute."""
        self.validator("y", value)
        self.__y = value

    def __str__(self):
        """String representation of Rectangle"""
        r1 = "[Rectangle] ({}) {}/{} - {}/{}"
        rid = self.id
        rx = self.__x
        ry = self.__y
        rw = self.__width
        rh = self.__height
        r2 = r1.format(rid, rx, ry, rw, rh)
        return r2
