#!/usr/bin/python3
"""comment Module"""
from models.rectangle import Rectangle


class Square(Rectangle):
    """class square inherits from rectangle"""
    def __init__(self, size, x=0, y=0, id=None):
        """initializes a square object"""
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        """getter method for the size of the sqaure"""
        return self.width

    @size.setter
    def size(self, value):
        """setter method for the size of the square"""
        self.width = value
        self.height = value

    def __str__(self):
        """string representation of the square object"""
        return (f'[Square] ({self.id}) {self.x}/{self.y} - '
                f'{self.size}')

    def update(self, *args, **kwargs):
        """update the attributes of the square"""
        if args:
            self.id = args[0]
            if len(args) > 1:
                self.size = args[1]
            if len(args) > 2:
                self.x = args[2]
            if len(args) > 3:
                self.y = args[3]
        else:
            if 'id' in kwargs:
                self.id = kwargs['id']
            if 'size' in kwargs:
                self.width = kwargs['size']
            if 'x' in kwargs:
                self.x = kwargs['x']
            if 'y' in kwargs:
                self.y = kwargs['y']

    def to_dictionary(self):
        """Return dictionary representation of the Rectangle."""
        squa_dict = {}
        squa_dict['id'] = self.id
        squa_dict['size'] = self.size
        squa_dict['x'] = self.x
        squa_dict['y'] = self.y
        return squa_dict
