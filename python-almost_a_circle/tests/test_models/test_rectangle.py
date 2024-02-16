import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square


class TestRectangle(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_rectangle_creation(self):
        r1 = Rectangle(10, 2)
        self.assertEqual(r1.id, 1)

        r2 = Rectangle(2, 10)
        self.assertEqual(r2.id, 2)

        r3 = Rectangle(10, 2, 0, 0, 12)
        self.assertEqual(r3.id, 12)

        r4 = Rectangle(1, 2)
        self.assertEqual(r4.id, 3)

        r5 = Rectangle(1, 2, 3)
        self.assertEqual(r5.id, 4)

        r6 = Rectangle(1, 2, 3, 4)
        self.assertEqual(r6.id, 5)

    def test_invalid_inputs(self):
        with self.assertRaises(TypeError):
            Rectangle(10, "2")

        r = Rectangle(10, 2)
        with self.assertRaises(ValueError):
            r.width = -10

        r = Rectangle(10, 2)
        with self.assertRaises(TypeError):
            r.x = {}

        with self.assertRaises(ValueError):
            Rectangle(10, 2, 3, -1)


if __name__ == "__main__":
    unittest.main()
