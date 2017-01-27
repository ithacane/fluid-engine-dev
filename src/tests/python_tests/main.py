#!/usr/bin/env python

"""
Copyright (c) 2017 Doyub Kim
"""

import pyjet as jet
import unittest

class TestFrame(unittest.TestCase):
    def test_init(self):
        f1 = jet.Frame()
        self.assertEqual(f1.index, 0)
        self.assertEqual(f1.timeIntervalInSeconds, 1.0/60.0)

        f2 = jet.Frame(42, 0.1)
        self.assertEqual(f2.index, 42)
        self.assertEqual(f2.timeIntervalInSeconds, 0.1)

class TestFlipSolver3(unittest.TestCase):
    def test_init(self):
        dx = 1.0 / 32.0
        solver = jet.FlipSolver3((32, 32, 32), (dx, dx, dx), (0, 0, 0))

    def test_update(self):
        dx = 1.0 / 32.0
        solver = jet.FlipSolver3((32, 32, 32), (dx, dx, dx), (0, 0, 0))
        solver.update(jet.Frame())

    def test_builder(self):
        solver = jet.FlipSolver3.builder().withResolution((12, 34, 56)).withGridSpacing((1, 2, 3)).withOrigin((4, 5, 6))

if __name__ == '__main__':
    jet.Logging.mute()
    unittest.main()
