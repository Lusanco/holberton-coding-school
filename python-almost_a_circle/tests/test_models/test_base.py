#!/usr/bin/python3
import unittest
from models.base import Base


class TestBase(unittest.TestCase):
    def test_auto_assign_id(self):
        # Test that an instance of Base automatically assigns an ID
        b1 = Base()
        b2 = Base()
        self.assertEqual(b1.id, 1)
        self.assertEqual(b2.id, 2)


if __name__ == "__main__":
    unittest.main()
