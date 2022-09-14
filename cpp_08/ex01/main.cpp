#include "span.hpp"

int main()
{
	std::cout << "Welcome to ex01 - Span" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout <<  "* Test I - with normal param *" << std::endl;
	std::cout << std::endl;

	Span spNormal = Span(5);
	spNormal.addNumber(5);
	spNormal.addNumber(3);
	spNormal.addNumber(17);
	spNormal.addNumber(9);
	spNormal.addNumber(11);

	std::cout << "* Print value *" << std::endl;
	spNormal.printValue();
	std::cout << std::endl;

	std::cout << "* Shortest and longest span *" << std::endl;
	std::cout << "shortest Span: " << spNormal.shortestSpan() << std::endl;
	std::cout << "longest  Span: " << spNormal.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "* Test II - with mono param *" << std::endl;
	std::cout << std::endl;

	Span spMono = Span(5);
	spMono.addNumber(42, 5);

	std::cout << "* Print value *" << std::endl;
	spMono.printValue();
	std::cout << std::endl;

	std::cout << "* Shortest and longest span *" << std::endl;
	std::cout << "shortest Span: " << spMono.shortestSpan() << std::endl;
	std::cout << "longest  Span: " << spMono.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "* Test III - with some no mono param *" << std::endl;
	std::cout << std::endl;

	Span spNoMono = Span(5);
	spNoMono.addNumber(3);
	spNoMono.addNumber(42, 3);
	spNoMono.addNumber(93);

	std::cout << "* Print value *" << std::endl;
	spNoMono.printValue();
	std::cout << std::endl;

	std::cout << "* Shortest and longest span *" << std::endl;
	std::cout << "shortest Span: " << spNoMono.shortestSpan() << std::endl;
	std::cout << "longest  Span: " << spNoMono.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "* Test IV - exception *" << std::endl;
	std::cout << std::endl;

	std::cout << "* addNumber - ArrayIsFullException *" << std::endl;
	try {
		Span spExc = Span(5);
		spNoMono.addNumber(42, 5);
		spNoMono.addNumber(42);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "* addNumber - OutOfIndexException *" << std::endl;
	try {
		Span spExc = Span(5);
		spExc.addNumber(42, 4);
		spExc.addNumber(42, 4);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "* shortestSpan - ToFewElementException *" << std::endl;
	try {
		Span spExc = Span(1);
		spExc.addNumber(42);
		spExc.shortestSpan();
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "* longestSpan - ToFewElementException *" << std::endl;
	try {
		Span spExc = Span(1);
		spExc.longestSpan();
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "* Test IV - exception *" << std::endl;
	std::cout << std::endl;

	std::cout << "* copy *" << std::endl;
	Span spCopy = Span(spNormal);
	spCopy.printValue();
	std::cout << std::endl;

	std::cout << "* operator= *" << std::endl;
	spCopy = spMono;
	spCopy.printValue();

	return 0;
}

