#!/usr/bin/python3
import unittest
from models.rectangle import Rectangle


class TestRectangle(unittest.TestCase):
    def test_validator(self):
        # Test validation with valid values
        r = Rectangle(5, 5)
        self.assertEqual(r.width, 5)
        self.assertEqual(r.height, 5)

        # Test validation with invalid values
        with self.assertRaises(ValueError):
            r = Rectangle(-5, 5)
        with self.assertRaises(TypeError):
            r = Rectangle("invalid", 5)

        # Test validation with empty inputs
        with self.assertRaises(TypeError):
            r = Rectangle()
        with self.assertRaises(TypeError):
            r = Rectangle(5)
        with self.assertRaises(TypeError):
            r = Rectangle(5, 5, 5, 5, 5, 5)  # too many arguments

        # Test validation with None
        with self.assertRaises(TypeError):
            r = Rectangle(None, 5)
        with self.assertRaises(TypeError):
            r = Rectangle(5, None)
        with self.assertRaises(TypeError):
            r = Rectangle(None, None)

    def test_area(self):
        # Test area calculation
        r = Rectangle(5, 5)
        self.assertEqual(r.area(), 25)

        # Test area calculation with zero values
        r = Rectangle(0, 5)
        self.assertEqual(r.area(), 0)

        # Test area calculation with negative values (should raise ValueError)
        with self.assertRaises(ValueError):
            r = Rectangle(-5, 5)

        # Test area calculation with None (should raise TypeError)
        with self.assertRaises(TypeError):
            r = Rectangle(None, 5)
        with self.assertRaises(TypeError):
            r = Rectangle(5, None)
        with self.assertRaises(TypeError):
            r = Rectangle(None, None)

        # Test area calculation with string (should raise TypeError)
        with self.assertRaises(TypeError):
            r = Rectangle("invalid", 5)
        with self.assertRaises(TypeError):
            r = Rectangle(5, "invalid")

        # Test area calculation with empty inputs (should raise TypeError)
        with self.assertRaises(TypeError):
            r = Rectangle()
        with self.assertRaises(TypeError):
            r = Rectangle(5)
        with self.assertRaises(TypeError):
            r = Rectangle(5, 5, 5, 5, 5, 5)  # too many arguments


if __name__ == "__main__":
    unittest.main()
