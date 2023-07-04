#!/usr/bin/python3
import unittest
max_integer = __import__('6-max_integer').max_integer

class testMaxInt(unittest.TestCase):
    
    def test_end(self):
        arr = [1, 2, 4, 8]
        self.assertEqual(max_integer(arr), 8)
    
    def test_start(self):
        arr = [9, 2, 4, 8]
        self.assertEqual(max_integer(arr), 9)
    
    def test_mid(self):
        arr = [1, 2, 7, 4, 3]
        self.assertEqual(max_integer(arr), 7)
    
    def test_neg(self):
        arr = [1, 2, 4, -8]
        self.assertEqual(max_integer(arr), 4)
    
    def test_allneg(self):
        arr = [-1, -2, -4, -8]
        self.assertEqual(max_integer(arr), -1)
    
    def test_elem(self):
        arr = [5]
        self.assertEqual(max_integer(arr), 5)
    
    def test_empty(self):
        arr = []
        self.assertEqual(max_integer(arr), None)