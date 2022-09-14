#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>

Base * generate(void) {
	srand(time(0));
	int type = rand() % 3;

	if (type == 0) {
		return (new A);
	} else if (type == 1) {
		return (new B);
	} else {
		return (new C);
	}
}
//
void identify(Base* p) {
	std::cout << "Pointer: ";
	if (p == dynamic_cast<A*>(p)) {
		std::cout << "A";
	} else if (p == dynamic_cast<B*>(p)) {
		std::cout << "B";
	} else if (p == dynamic_cast<C*>(p)) {
		std::cout << "C";
	} else if (p == dynamic_cast<Base*>(p)) {
		std::cout << "Base";
	}
	std::cout << std::endl;
}

void identify(Base& p) {
	std::cout << "Reference: ";
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (...) {}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (...) {}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (...) {}
	try {
		Base base = dynamic_cast<Base&>(p);
		std::cout << "Base" << std::endl;
		return ;
	} catch (...) {}
	std::cout << std::endl;
}

int main(void) {

	Base *a = new A;
	Base *b = new B;
	Base *c = new C;
	Base *base = new Base;

	identify(a);
	identify(b);
	identify(c);
	identify(base);
	identify(*a);
	identify(*b);
	identify(*c);
	identify(*base);
	return (0);
}