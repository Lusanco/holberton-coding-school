import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square
import os


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

    def test_str(self):
        s = Square(1, 2, 3, 4)
        self.assertEqual(s.__str__(), "[Square] (4) 2/3 - 1")

    def test_to_dictionary(self):
        s = Square(1, 2, 3, 4)

        # Expected dictionary representation
        expected_dict = {
            "id": s.id,
            "size": s.size,
            "x": s.x,
            "y": s.y,
        }

        # Get the actual dictionary representation
        actual_dict = s.to_dictionary()

        # Assert that the actual dictionary matches the expected dictionary
        self.assertDictEqual(actual_dict, expected_dict)

    def test_update(self):
        # Create a Square instance for testing
        s = Square(10, 20, 30, 40)

        # Test update with no arguments
        s.update()
        self.assertEqual((s.size, s.x, s.y, s.id), (10, 20, 30, 40))

        # Test update with one argument
        s.update(89)
        self.assertEqual(s.id, 89)

        # Test update with multiple arguments
        s.update(89, 1, 2, 3)
        self.assertEqual((s.id, s.size, s.x, s.y), (89, 1, 2, 3))

    def test_create(self):
        s1 = Square(1, 2, 3, 89)
        s1_dictionary = s1.to_dictionary()
        s2 = Square.create(**s1_dictionary)
        self.assertEqual(s1.id, s2.id)
        self.assertEqual(s1.size, s2.size)
        self.assertEqual(s1.x, s2.x)
        self.assertEqual(s1.y, s2.y)

    def test_save_to_file(self):
        s1 = Square(10, 7, 2, 8)
        s2 = Square(2, 4)
        list_squares = [s1, s2]

        Square.save_to_file(list_squares)

        file_name = "Square.json"
        self.assertTrue(os.path.exists(file_name))

        with open(file_name, "r") as file:
            content = file.read()
            self.assertTrue(len(content) > 0)

        os.remove(file_name)

        Square.save_to_file(None)
        file_name = "Square.json"
        self.assertTrue(os.path.exists(file_name))
        os.remove(file_name)

        Square.save_to_file([])
        file_name = "Square.json"
        self.assertTrue(os.path.exists(file_name))
        os.remove(file_name)

    def test_load_from_file(self):
        result = Square.load_from_file()
        self.assertEqual(result, [])

        s1 = Square(10, 7, 2, 8)
        s2 = Square(2, 4)
        list_rectangles = [s1, s2]

        Square.save_to_file(list_rectangles)

        result = Square.load_from_file()
        self.assertEqual(len(result), 2)

        os.remove("Square.json")


if __name__ == "__main__":
    unittest.main()
