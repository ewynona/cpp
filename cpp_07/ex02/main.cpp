#include "Array.hpp"

int main(void) {

	std::cout << "Empty arr:" << std::endl;
	Array<double> empty1;
	Array<double> empty2(0);
	std::cout << empty1 << std::endl;
	std::cout << "_________________" << std::endl;

	std::cout << "Copy constructor:" << std::endl;
	Array<char> arr(5);
	Array<char> arrCpy(3);
	for (int i = 0; i < 5; i++) {
		arr[i] = 'a' + i;
	}
	std::cout << arr;
	arrCpy = arr;
	std::cout << "__________" << std::endl;
	std::cout << arrCpy;
	std::cout << "____________________" << std::endl;
	std::cout << "Changing arr element and get this element" << std::endl;
	arr[2] = '2';
	std::cout << "arr[2] = " << arr[2] << std::endl;
	std::cout << "arrCpy[2] = " << arrCpy[2] << std::endl;
	std::cout << "Out of range:	" << std::endl;
	try {
		std::cout << arr[1111];
	} catch (std::exception &exc) {
		std::cout << "Element out of range" << std::endl;
	}
	return (0);
}