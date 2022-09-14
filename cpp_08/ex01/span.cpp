#include "span.hpp"

Span::Span(unsigned int n) {
	this->_maxStored = n;
	this->_nowStored = 0;
}

Span::Span(const Span &other) {
	this->_maxStored = other._maxStored;
	this->_nowStored = other._nowStored;
	this->_numbers = other._numbers;
}

Span::~Span() {}

Span & Span::operator=(const Span &other) {
	if (this == &other)
		return (*this);
	this->_maxStored = other._maxStored;
	this->_nowStored = other._nowStored;
	this->_numbers.clear();
	this->_numbers = other._numbers;
	return (*this);
}

void Span::addNumber(int num) {
	if (this->_nowStored >= this->_maxStored) {
		throw Span::fullException();
	}
	this->_numbers.push_back(num);
	this->_nowStored++;
}

void Span::addNumber(int num, int amount) {
	if (amount + this->_nowStored > this->_maxStored) {
		throw Span::fullException();
	}
	for (int i = 0; i < amount; i++) {
		this->_numbers.push_back(num);
		this->_nowStored++;
	}
}

void Span::printValue() {
	for (int i = 0; i < this->_nowStored; i++) {
		std::cout << this->_numbers[i] << std::endl;
	}
}

int Span::longestSpan() {
	if (this->_nowStored <= 1)
		throw Span::notEnoughException();
	std::vector<int> tmp;
	tmp.assign(this->_numbers.begin(), this->_numbers.end());
	sort(tmp.begin(), tmp.end());

	int min = tmp[0];
	int max = tmp[tmp.size() - 1];

	return (max - min);
}

int Span::shortestSpan() {
	if (this->_nowStored <= 1)
		throw Span::notEnoughException();
	std::vector<int> tmp;
	tmp.assign(this->_numbers.begin(), this->_numbers.end());
	sort(tmp.begin(), tmp.end());

	int min1 = tmp[0];
	int min2 = tmp[1];

	return (min2 - min1);
}

const char * Span::notEnoughException::what() const throw() {
	return ("Not enough numbers");
}

const char * Span::fullException::what() const throw() {
	return ("Span is full");
}

