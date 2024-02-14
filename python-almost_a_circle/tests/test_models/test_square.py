#!/usr/bin/python3
import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square
import json
import os


class TestSquare(unittest.TestCase):
    def test_size_getter_setter(self):
        # Test size getter and setter
        s = Square(3)
        self.assertEqual(s.size, 3)

        s.size = 10
        self.assertEqual(s.size, 10)
        self.assertEqual(s.width, 10)
        self.assertEqual(s.height, 10)

        # Test size getter and setter with string (should raise TypeError)
        with self.assertRaises(TypeError):
            s.size = "invalid"

        # Test size getter and setter with None (should raise TypeError)
        with self.assertRaises(TypeError):
            s.size = None

        # Test size getter and setter with empty input (should raise TypeError)
        with self.assertRaises(TypeError):
            s.size = ()

    def test_update(self):
        # Test updating attributes using update method
        s = Square(5, 2, 1)
        s.update(10, 20, 30, 40)
        self.assertEqual(s.id, 10)
        self.assertEqual(s.size, 20)
        self.assertEqual(s.x, 30)
        self.assertEqual(s.y, 40)

        # Test update method with string (should raise TypeError)
        with self.assertRaises(TypeError):
            s.update("invalid", 20, 30, 40)

        # Test update method with None (should raise TypeError)
        with self.assertRaises(TypeError):
            s.update(None, 20, 30, 40)

        # Test update method with empty inputs (should not raise errors)
        s.update()
        self.assertEqual(s.id, 10)
        self.assertEqual(s.size, 20)
        self.assertEqual(s.x, 30)
        self.assertEqual(s.y, 40)


if __name__ == "__main__":
    unittest.main()
