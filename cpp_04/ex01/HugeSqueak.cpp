#include "HugeSqueak.hpp"

HugeSqueak::HugeSqueak(void) : Enemy(80, "HugeSqueak") {
	std::cout << "* piiiiiiiiiiiiiiu *" << std::endl;
}

HugeSqueak::~HugeSqueak(void) {
	std::cout << "* pip pip *" << std::endl;
}

HugeSqueak::HugeSqueak(const HugeSqueak &other) : Enemy(other) {}

HugeSqueak & HugeSqueak::operator=(const HugeSqueak &other) {
	this->_type = other._type;
	this->_hp = other._hp;
	return (*this);
}