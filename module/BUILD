load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")

pybind_extension(
    name = "t_math",
    srcs = ["math.cc"],
)

py_test(
    python_version = "PY3",
    name = "math_test",
    size = "small",
    srcs = ["math_test.py"],
    data = [":t_math.so"],
)
