#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "str:\t" + str << std::endl;
	std::cout << "ptr:\t" + *ptr << std::endl;
	std::cout << "ref:\t" + ref << std::endl;

	return (0);
}