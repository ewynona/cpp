//#include "whatever.hpp"
#include <iostream>

template<typename T>
void swap(T &a, T &b) {
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T min(T a, T b) {
	return (a < b) ? a : b;
}

template<typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

class Awesome {
public:

	Awesome(int n) : _n(n) {}

	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

	int getN() { return (this->_n); }

private:

	int _n;
};


int main( void ) {
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	Awesome e(6);
	Awesome f(12);
	::swap(e, f);
	std::cout << "e = " << e.getN() << ", f = " << f.getN() << std::endl;
	std::cout << "min(e, f) = " << min(e, f).getN() << std::endl;
	std::cout << "max(e, f) = " << max(e, f).getN() << std::endl;


	return 0;
}