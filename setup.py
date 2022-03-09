"""
"""
from setuptools import setup
from setuptools import Extension

ex_module = Extension(
    'hello_demo',
    sources=['hello_demo.cpp'],
    libraries=['boost_python39', 'boost_numpy39'],
    include_dirs=[
        "/opt/homebrew/include",
        "/opt/homebrew/Cellar/python@3.9/3.9.10/Frameworks/Python.framework/Versions/3.9/include/python3.9",
    ],
    library_dirs=[
        "/opt/homebrew/lib",
        "/opt/homebrew/Cellar/python@3.9/3.9.10/Frameworks/Python.framework/Versions/3.9/lib"
    ],
    extra_compile_args=['-std=c++11', '-O3']
)

setup(name="boostcorr", version="0.0.1", ext_modules=[ex_module])
