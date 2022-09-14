#include <iostream>
#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> ms;

	ms.push(21);
	ms.push(42);

	std::cout << "Size: " << ms.size() << std::endl;
	std::cout << "Top: " << ms.top() << std::endl;
	std::cout << "___________________" << std::endl;
	std::cout << "Push 2020" << std::endl;
	ms.push(2020);
	std::cout << "Size: " << ms.size() << std::endl;
	std::cout << "Top: " << ms.top() << std::endl;
	std::cout << "___________________" << std::endl;
	std::cout << "Iteration" << std::endl;

	MutantStack<int>::iterator it = ms.begin();

	for ( ; it != ms.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << "___________________" << std::endl;
	std::cout << "Copy construct" << std::endl;
	MutantStack<int> cpy(ms);

	ms.pop();
	MutantStack<int>::iterator itCpy = cpy.begin();
	for ( ; itCpy != cpy.end(); itCpy++) {
		std::cout << *itCpy << std::endl;
	}

	std::cout << "___________________" << std::endl;
	std::cout << "Assignation" << std::endl;
	MutantStack<int> tmp;
	tmp.push(1);
	tmp.push(2);
	tmp.push(3);
	cpy = tmp;
	tmp.pop();
	itCpy = cpy.begin();

	std::cout << "Cpy: ";
	for ( ; itCpy != cpy.end(); itCpy++) {
		std::cout << *itCpy << " ";
	}
	std::cout << std::endl;
	std::cout << "Tmp: ";
	MutantStack<int>::iterator itTmp = tmp.begin();
	for ( ; itTmp != tmp.end(); itTmp++) {
		std::cout << *itTmp << " ";
	}
	std::cout << std::endl;
	return (0);
}