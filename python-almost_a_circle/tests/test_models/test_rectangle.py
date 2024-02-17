import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square
from unittest.mock import patch
from io import StringIO
import os


class TestRectangle(unittest.TestCase):

    def setUp(self):
        Base._Base__nb_objects = 0

    def test_rectangle(self):
        r1 = Rectangle(1, 2)
        self.assertEqual(r1.id, 1)
        self.assertEqual(r1.width, 1)
        self.assertEqual(r1.height, 2)

        r2 = Rectangle(1, 2, 3, 4, 5)
        self.assertEqual(r2.id, 5)
        self.assertEqual(r2.width, 1)
        self.assertEqual(r2.height, 2)
        self.assertEqual(r2.x, 3)
        self.assertEqual(r2.y, 4)

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

    def test_area(self):
        r3 = Rectangle(1, 2)
        self.assertEqual(r3.area(), 2)

    def test_str(self):
        r4 = Rectangle(1, 2, 3, 4, 5)
        self.assertEqual(r4.__str__(), "[Rectangle] (5) 3/4 - 1/2")

    @patch("sys.stdout", new_callable=StringIO)
    def test_display(self, mock_stdout):
        # Create a Rectangle instance for testing
        r5 = Rectangle(1, 2)

        # Expected output for a 1x2 rectangle
        expected_output = "#\n#\n"

        # Call the display method
        r5.display()

        # Get the printed output
        actual_output = mock_stdout.getvalue()

        # Assert that the printed output matches the expected output
        self.assertEqual(actual_output, expected_output)

        # Create a Rectangle instance for testing
        r6 = Rectangle(1, 2, 3, 4)

        # Expected output for a 1x2 rectangle
        expected_output = "#\n#\n\n\n\n\n   #\n   #\n"

        # Call the display method
        r6.display()

        # Get the printed output
        actual_output = mock_stdout.getvalue()

        # Assert that the printed output matches the expected output
        self.assertEqual(actual_output, expected_output)

    def test_to_dictionary(self):
        r7 = Rectangle(1, 2, 3, 4)

        # Expected dictionary representation
        expected_dict = {
            "id": r7.id,
            "width": r7.width,
            "height": r7.height,
            "x": r7.x,
            "y": r7.y,
        }

        # Get the actual dictionary representation
        actual_dict = r7.to_dictionary()

        # Assert that the actual dictionary matches the expected dictionary
        self.assertDictEqual(actual_dict, expected_dict)

    def test_update(self):
        # Create a Rectangle instance for testing
        r = Rectangle(10, 20, 30, 40, 1)

        # Test update with no arguments
        r.update()
        self.assertEqual((r.width, r.height, r.x, r.y, r.id), (10, 20, 30, 40, 1))

        # Test update with one argument
        r.update(89)
        self.assertEqual(r.id, 89)

        # Test update with multiple arguments
        r.update(89, 1, 2, 3, 4)
        self.assertEqual((r.id, r.width, r.height, r.x, r.y), (89, 1, 2, 3, 4))

    def test_create(self):
        r1 = Rectangle(3, 5, 1)
        r1_dictionary = r1.to_dictionary()
        r2 = Rectangle.create(**r1_dictionary)
        self.assertEqual(r1.id, r2.id)
        self.assertEqual(r1.width, r2.width)
        self.assertEqual(r1.height, r2.height)
        self.assertEqual(r1.x, r2.x)
        self.assertEqual(r1.y, r2.y)

    def test_save_to_file(self):
        r1 = Rectangle(10, 7, 2, 8)
        r2 = Rectangle(2, 4)
        list_rectangles = [r1, r2]

        Rectangle.save_to_file(list_rectangles)

        file_name = "Rectangle.json"
        self.assertTrue(os.path.exists(file_name))

        with open(file_name, "r") as file:
            content = file.read()
            self.assertTrue(len(content) > 0)

        os.remove(file_name)

        Rectangle.save_to_file(None)
        file_name = "Rectangle.json"
        self.assertTrue(os.path.exists(file_name))
        os.remove(file_name)

        Rectangle.save_to_file([])
        file_name = "Rectangle.json"
        self.assertTrue(os.path.exists(file_name))
        os.remove(file_name)

    def test_load_from_file(self):
        result = Rectangle.load_from_file()
        self.assertEqual(result, [])

        r1 = Rectangle(10, 7, 2, 8)
        r2 = Rectangle(2, 4)
        list_rectangles = [r1, r2]

        Rectangle.save_to_file(list_rectangles)

        result = Rectangle.load_from_file()
        self.assertEqual(len(result), 2)

        os.remove("Rectangle.json")


if __name__ == "__main__":
    unittest.main()
