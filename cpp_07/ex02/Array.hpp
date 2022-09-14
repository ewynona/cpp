#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<class T>
class Array {
public:
	Array() {
		this->_array = nullptr;
		this->_len = 0;
	}
	Array(unsigned int n) {
		if (n <= 0) {
			this->_array = nullptr;
		} else {
			this->_array = new T[n];
		}
		this->_len = n;
	}
	Array(Array<T> const & other) {
		this->_array = new T[other._len];
		this->_len = other._len;
		for (int i = 0; i < this->_len; i++) {
			this->_array[i] = other._array[i];
		}
	}
	~Array() {
		if (this->_array) {
			delete [] this->_array;
		}
	}

	Array<T> & operator=(Array<T> const & other) {
		if (this->_len > 0) {
			delete [] this->_array;
		}
		this->_array = new T[other._len];
		this->_len = other._len;
		for (int i = 0; i < this->_len; i++) {
			this->_array[i] = other._array[i];
		}
		return (*this);
	}

	T & operator[](int i) {
		if (i >= 0 && i < this->_len)
			return (this->_array[i]);
		else
			throw std::exception();
	}

	int	size() {
		return (this->_len);
	}

	T * getArray() {
		return (this->_array);
	}

private:
	T*	_array;
	int	_len;
};

template<class T>
std::ostream & operator<<(std::ostream &out, Array<T> &src) {
	if (src.getArray()) {
		for (int i = 0; i < src.size(); i++) {
			out << "arr[" << i << "] = ";
			if (src.getArray()[i]) {
				out << src.getArray()[i] << std::endl;
			} else {
				out << src.getArray()[i] << std::endl;
			}
		}
	} else {
		out << "nullptr";
	}
	return (out);
}

#endif