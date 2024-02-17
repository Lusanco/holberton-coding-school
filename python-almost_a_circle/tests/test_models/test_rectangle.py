import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square


class TestRectangle(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_rectangle(self):
        r1 = Rectangle(1, 2)
        self.assertEqual(r1.id, 1)
        self.assertEqual(r1.width, 1)
        self.assertEqual(r1.height, 2)

        with self.assertRaises(TypeError):
            Rectangle("1", 2)

        with self.assertRaises(TypeError):
            Rectangle(1, "2")

        with self.assertRaises(TypeError):
            Rectangle(1, 2, "3")

        with self.assertRaises(TypeError):
            Rectangle(1, 2, 3, "4")

        with self.assertRaises(ValueError):
            Rectangle(-1, 2)

        with self.assertRaises(ValueError):
            Rectangle(1, -2)

        with self.assertRaises(ValueError):
            Rectangle(0, 2)

        with self.assertRaises(ValueError):
            Rectangle(1, 0)

        with self.assertRaises(ValueError):
            Rectangle(1, 2, -3)

        with self.assertRaises(ValueError):
            Rectangle(1, 2, 3, -4)


if __name__ == "__main__":
    unittest.main()
