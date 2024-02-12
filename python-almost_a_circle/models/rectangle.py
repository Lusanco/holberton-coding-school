#!/usr/bin/python3

"""
Module: rectangle
Descrip: This module contains
the Rectangle class, which
inherits from the Base class
and represents a rectangle.
Authors: Lusanco
"""


from models.base import Base


class Rectangle(Base):
    """rectangle class that inherits from Base"""

    def __init__(self, width, height, x=0, y=0, id=None):
        """
        Constructor for the Rectangle class.

        Parameters:
        - width (int): Width of the rectangle.
        - height (int): Height of the rectangle.
        - x (int): x-coordinate of the rectangle (default is 0).
        - y (int): y-coordinate of the rectangle (default is 0).
        - id (int): An optional parameter representing the object's
        identifier. If not provided, a unique id is assigned.
        """
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

        @property
        def width(self):
            """
            Getter method for the width attribute.

            Returns:
            - int: The width of the rectangle.
            """
            return self.__width

        @width.setter
        def width(self, value):
            """
            Setter method for the width attribute.

            Parameters:
            - value (int): The new width value.

            Raises:
            - TypeError: If the provided value is not an integer.
            - ValueError: If the provided value is less than or equal to 0.
            """
            if not isinstance(value, int):
                raise TypeError("width must be an integer")
            elif value <= 0:
                raise ValueError("width must be > 0")
            self.__width = value

        @property
        def height(self):
            """
            Getter method for the height attribute.

            Returns:
            - int: The height of the rectangle.
            """
            return self.__height

        @height.setter
        def height(self, value):
            """
            Setter method for the height attribute.

            Parameters:
            - value (int): The new height value.

            Raises:
            - TypeError: If the provided value is not an integer.
            - ValueError: If the provided value is less than or equal to 0.
            """
            if not isinstance(value, int):
                raise TypeError("height must be an integer")
            elif value <= 0:
                raise ValueError("height must be > 0")
            self.__height = value

        @property
        def x(self):
            """
            Getter method for the x attribute.

            Returns:
            - int: The x-coordinate of the rectangle.
            """
            return self.__x

        @x.setter
        def x(self, value):
            """
            Setter method for the x attribute.

            Parameters:
            - value (int): The new x-coordinate value.

            Raises:
            - TypeError: If the provided value is not an integer.
            - ValueError: If the provided value is less than 0.
            """
            if not isinstance(value, int):
                raise TypeError("x must be an integer")
            elif value < 0:
                raise ValueError("x must be >= 0")
            self.__x = value

        @property
        def y(self):
            """
            Getter method for the y attribute.

            Returns:
            - int: The y-coordinate of the rectangle.
            """
            return self.__y

        @y.setter
        def y(self, value):
            """
            Setter method for the y attribute.

            Parameters:
            - value (int): The new y-coordinate value.

            Raises:
            - TypeError: If the provided value is not an integer.
            - ValueError: If the provided value is less than 0.
            """
            if not isinstance(value, int):
                raise TypeError("y must be an integer")
            elif value < 0:
                raise ValueError("y must be >= 0")
            self.__y = value
