import random
import unittest

import numpy as np

import ece3210_pybind11_ex

class TestExample(unittest.TestCase):
    def test_double_array(self):

        N = random.randint(20,100)

        x = np.random.uniform(-1000,1000,size=(N))

        x_my = ece3210_pybind11_ex.double_array(x)
        x_sol = 2*x

        np.testing.assert_array_almost_equal(x_my,
                                             x_sol)

if __name__ == "__main__":
    unittest.main()
