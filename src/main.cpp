#include <cstdio>

#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/stl.h>

extern "C" {
#include "array_ops.h"
}

namespace py = pybind11;

py::array_t<double> double_array_cpp(py::array_t<double> a_np)
{

    array a_array;
    a_array.len = (size_t)a_np.request().size;
    a_array.data = (double *)a_np.request().ptr;

    py::array_t<double> b_np = 
	py::array_t<double>((pybind11::ssize_t)a_array.len);
    
    array b_array;
    b_array.len = (size_t)b_np.request().size;
    b_array.data = (double *)b_np.request().ptr;

    double_array(&b_array, &a_array);
    
    return b_np;
}


PYBIND11_MODULE(_ece3210_lab01_ex, m)
{
    m.doc() = "a collection of examples for ECE 3210 lab 1";
    m.def("double_array", &double_array_cpp,
          "doubles the values in a numpy array");
}
