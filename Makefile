default:
	python setup.py build_ext -i -f
	# python setup.py bdist_wheel
	mv hello_demo.cpython-39-darwin.so hello_demo.so