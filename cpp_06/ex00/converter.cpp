#include "converter.hpp"

Converter::Converter(std::string str) : _str(str) {
	this->_checkChar = true;
	this->_checkInt = true;
}

Converter::Converter(const Converter &other) {
	this->_d = other._d;
	this->_f = other._f;
	this->_i = other._i;
	this->_c = other._c;
	this->_checkChar = other._checkChar;
	this->_checkInt = other._checkInt;
	this->_str = other._str;
	this->_type = other._type;
}

Converter::~Converter() {}

Converter & Converter::operator=(const Converter &other) {
	if (this == &other)
		return (*this);

	this->_d = other._d;
	this->_f = other._f;
	this->_i = other._i;
	this->_c = other._c;
	this->_checkChar = other._checkChar;
	this->_checkInt = other._checkInt;
	this->_str = other._str;
	this->_type = other._type;

	return (*this);
}

void Converter::typeInit() {
	size_t	len;

	try {
		this->_i = std::stoi(this->_str, &len);
		this->_checkInt = true;
		if (this->_str.length() == len) {
			if (this->_i > 127 || this->_i < 0)
				this->_checkChar = false;
			this->_type = INT;
			return ;
		}
	} catch (...) {
		this->_checkInt = false;
	}

	try {
		this->_d = std::stod(this->_str, &len);
		if (this->_str.length() == len) {
			if (this->_d < 0 || this->_d > 127 || std::isnan(this->_d))
				this->_checkChar = false;
			this->_type = DOUBLE;
			return ;
		}
	} catch (...) {}

	try {
		this->_f = std::stof(this->_str, &len);
		if (this->_str.length() == len ||
				(this->_str.length() == len + 1 && this->_str[this->_str.length() - 1] == 'f')) {
			if (this->_f < 0 || this->_f > 127 || std::isnan(this->_f))
				this->_checkChar = false;
			this->_type = FLOAT;
			return ;
		}
	} catch (...) {}

	if (this->_str.length() == 1) {
		this->_c = this->_str[0];
		this->_type = CHAR;
		this->_checkChar = true;
		return ;
	}

	this->_type = ERROR;
}

int Converter::getType() {
	return (this->_type);
}

void Converter::varInit() {
	if (this->_type == INT) {
		this->_c = static_cast<char>(this->_i);
		this->_d = static_cast<double>(this->_i);
		this->_f = static_cast<float>(this->_i);
	} else if (this->_type == DOUBLE) {
		this->_i = static_cast<int>(this->_d);
		this->_c = static_cast<char>(this->_d);
		this->_f = static_cast<float>(this->_d);
	} else if (this->_type == FLOAT) {
		this->_i = static_cast<int>(this->_f);
		this->_c = static_cast<char>(this->_f);
		this->_d = static_cast<double>(this->_f);
	} else if (this->_type == CHAR) {
		this->_i = static_cast<int>(this->_c);
		this->_d = static_cast<double>(this->_c);
		this->_f = static_cast<float>(this->_c);
	}
}

void Converter::printInt() {
	if (!this->_checkInt) {
		std::cout << "Int: impossible" << std::endl;
	} else {
		std::cout << "Int: " << this->_i << std::endl;
	}
}

void Converter::printDouble() {
	std::cout << "Double: " << this->_d << std::endl;
}

void Converter::printFloat() {
	std::cout << "Float: " << this->_f << "f" << std::endl;
}

void Converter::printChar() {
	std::cout << "Char: ";
	if (this->_checkChar && this->_c < 32) {
		std::cout << "Non-displayable" << std::endl;
	} else if (this->_checkChar) {
		std::cout << this->_c << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
}





































