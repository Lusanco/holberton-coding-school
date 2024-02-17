import unittest
from models.base import Base
from models.rectangle import Rectangle
from models.square import Square
from unittest.mock import patch
from io import StringIO


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

        # # Test update with **kwargs
        # r.update(**{"id": 89})
        # self.assertEqual(r.id, 89)

        # r.update(**{"id": 89, "width": 1, "height": 2, "x": 3, "y": 4})
        # self.assertEqual((r.id, r.width, r.height, r.x, r.y), (89, 1, 2, 3, 4))

        # # Test update with a mix of *args and **kwargs
        # r.update(100, **{"width": 5, "y": 10})
        # self.assertEqual((r.id, r.width, r.height, r.x, r.y), (100, 5, 2, 3, 10))


if __name__ == "__main__":
    unittest.main()
