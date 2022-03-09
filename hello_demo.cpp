#define BOOST_PYTHON_STATIC_LIB

#include <boost/python.hpp>
#include <boost/python/numpy.hpp>

namespace p = boost::python;
namespace np = boost::python::numpy;


// int main(int argc, char **argv) {
//     Py_Initialize();
//     np::initialize();
// }

void hello()
{
    printf("Hello World!\n");
}

np::ndarray sum_vals(np::ndarray a, np::ndarray b)
{
    p::tuple shape = p::make_tuple(2, 2);
    np::ndarray result = np::zeros(shape, np::dtype::get_builtin<double>());
    result += a + b;
    return result;
}

BOOST_PYTHON_MODULE(hello_demo)
{
    Py_Initialize();
    np::initialize();
    p::def("hello", hello);
    p::def("sum_vals", sum_vals);
}