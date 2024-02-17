import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square


class TestSquare(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_square(self):
        s1 = Square(1)
        self.assertEqual(s1.id, 1)
        self.assertEqual(s1.size, 1)

        s2 = Square(1, 2)
        self.assertEqual(s2.id, 2)
        self.assertEqual(s2.size, 1)
        self.assertEqual(s2.x, 2)

        s3 = Square(1, 2, 3)
        self.assertEqual(s3.id, 3)
        self.assertEqual(s3.size, 1)
        self.assertEqual(s3.x, 2)
        self.assertEqual(s3.y, 3)

        s4 = Square(1, 2, 3, 4)
        self.assertEqual(s4.id, 4)
        self.assertEqual(s4.size, 1)
        self.assertEqual(s4.x, 2)
        self.assertEqual(s4.y, 3)

        with self.assertRaises(TypeError):
            Square("1")

        with self.assertRaises(TypeError):
            Square(1, "2")

        with self.assertRaises(TypeError):
            Square(1, 2, "3")

        with self.assertRaises(ValueError):
            Square(-1)

        with self.assertRaises(ValueError):
            Square(1, -2)

        with self.assertRaises(ValueError):
            Square(1, 2, -3)

        with self.assertRaises(ValueError):
            Square(0)


if __name__ == "__main__":
    unittest.main()
