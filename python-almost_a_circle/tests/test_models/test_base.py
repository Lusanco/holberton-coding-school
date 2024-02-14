#!/usr/bin/python3
import unittest
from models.base import Base
from models.rectangle import Rectangle


class TestBase(unittest.TestCase):
    def test_to_json_string(self):
        # Test with a list of dictionaries
        self.assertEqual(
            Base.to_json_string([{"id": 1, "width": 5}]), '[{"id": 1, "width": 5}]'
        )

        # Test with an empty list
        self.assertEqual(Base.to_json_string([]), "[]")

        # Test with None
        self.assertEqual(Base.to_json_string(None), "[]")

        # Test with a tuple
        self.assertEqual(
            Base.to_json_string(({"id": 1, "width": 5}, {"id": 2, "width": 10})),
            '[{"id": 1, "width": 5}, {"id": 2, "width": 10}]',
        )

        # Test with an empty tuple
        self.assertEqual(Base.to_json_string(()), "[]")

        # Test with a string (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.to_json_string("invalid")

        # Test with an empty string (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.to_json_string("")

        # Test with spaces (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.to_json_string("   ")

        # Test with different data types in the list
        self.assertEqual(
            Base.to_json_string([{"id": 1, "width": "hello"}]),
            '[{"id": 1, "width": "hello"}]',
        )
        self.assertEqual(
            Base.to_json_string([{"id": 1, "width": None}]),
            '[{"id": 1, "width": null}]',
        )

    def test_save_to_file(self):
        # Test saving list with instances of Rectangle
        r1 = Rectangle(10, 7, 2, 8, 1)
        r2 = Rectangle(2, 4, 0, 0, 2)

        # Test saving list with different types of objects
        obj_list = [r1, r2, "string", 123, None, {}]
        with self.assertRaises(TypeError):
            Base.save_to_file(obj_list)

        # Test saving an empty list
        Base.save_to_file([])

        # Test saving None
        Base.save_to_file(None)

        # Test saving a tuple (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.save_to_file((r1, r2))

        # Test saving a string (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.save_to_file("invalid")

        # Test saving an empty string (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.save_to_file("")

        # Test saving spaces (should be treated as an invalid input)
        with self.assertRaises(TypeError):
            Base.save_to_file("   ")


if __name__ == "__main__":
    unittest.main()
