//#include "iter.hpp"

#include <iostream>

template<typename T>
void iter(T *arr, int len, void (*f)(T const &a)) {
	for (int i = 0; i < len; i++) {
		(*f)(arr[i]);
	}
}

template<typename T>
void printChar(T &a) {
	std::cout << a << std::endl;
}

class Awesome {
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void) {

	int i[5] = { 0, 1, 2, 3, 4 };
	std::cout << "INT" << std::endl;
	iter(i, 5, printChar);
	double d[5] = { 0.2, 1.2, 2.2, 3.2, 4.2 };
	std::cout << "\nDOUBLE" << std::endl;
	iter(d, 5, printChar);
	float f[5] = { 0.2, 1.2, 2.2, 3.2, 4.2 };
	std::cout << "\nFLOAT" << std::endl;
	iter(f, 5, printChar);
	char c[5] = { 'a', 'b', 'c', 'd', 'e' };
	std::cout << "\nCHAR" << std::endl;
	iter(c, 5, printChar);

	Awesome tab[5];
	std::cout << "\nCLASS" << std::endl;
	iter(tab, 5, printChar);

	return (0);
}
