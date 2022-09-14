#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (true) {
		std::cout << "phonebook: ";
		getline(std::cin, input);
		if (input == "ADD") {
			phonebook.setContact();
		} else if (input == "SEARCH") {
			phonebook.getContact();
		} else if (input == "EXIT") {
			break;
		} else if (!input.empty()){
			std::cout << "Error: unknown command\n\nAvailable commands: ADD/SEARCH/EXIT" << std::endl;
		}
	}
	return (0);
}