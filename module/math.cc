#include <pybind11/pybind11.h>

int add(int i, int j) {
  return i + j;
}

int subtract(int i, int j) {
  return i + j;
}

namespace py = pybind11;

PYBIND11_MODULE(math, m) {
  m.def("add", &add);

  m.def("subtract", &subtract);
}