import numpy as np

import _ece3210_pybind11_ex

def double_array(a):

    # run checks on data, convert types, etc.
    b = _ece3210_pybind11_ex.double_array(a)

    return b
    
    
