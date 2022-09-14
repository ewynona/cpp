#include "easyfind.hpp"
#include <vector>
#include <list>
#include <array>



int main(void) {

	std::vector<int> vec;

	for (int i = 0; i < 5; i++) {
		vec.push_back(i + 3);
	}
	std::vector<int>::iterator found = easyfind(vec, 3);
	if (found == vec.end())
		std::cout << "cannot find 2 in vector" << std::endl;
	else
		std::cout << "found " << *found << " in vector" << std::endl;
	if (easyfind(vec, 10) == vec.end())
		std::cout << "10 not found in vector" << std::endl;

	std::array<char, 4> arr;
	for (int i = 0; i < 4; i++) {
		arr[i] = 'a' + i;
	}



	return (0);
}