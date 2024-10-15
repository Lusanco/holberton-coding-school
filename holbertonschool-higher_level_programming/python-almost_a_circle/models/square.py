#!/usr/bin/python3

"""
Module: square
Descrip: Square class
Authors: Lusanco
"""

from models.rectangle import Rectangle


class Square(Rectangle):
    """Square class inherited from Rectangle"""

    def __init__(self, size, x=0, y=0, id=None):
        """Initialize Square with id, size, x, and y"""
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        """Getter for size attribute."""
        return self.width

    @size.setter
    def size(self, value):
        """Setter for size attribute."""
        self.width = value
        self.height = value

    def to_dictionary(self):
        """Dictionary representation of Square"""
        return {
            "id": self.id,
            "size": self.size,
            "x": self.x,
            "y": self.y,
        }

    def update(self, *args, **kwargs):
        """Update attributes based on the arguments provided."""
        if args and args[0]:
            attrs = ["id", "size", "x", "y"]
            for i, arg in enumerate(args):
                setattr(self, attrs[i], arg)
        elif kwargs:
            for key, value in kwargs.items():
                setattr(self, key, value)

    def __str__(self):
        """String representation of Square"""
        r1 = "[Square] ({}) {}/{} - {}"
        r2 = r1.format(self.id, self.x, self.y, self.width)
        return r2
