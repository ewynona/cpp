#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() {
	this->index = -1;
}

void	Phonebook::setContact() {
	if (this->index < 7) {
		this->index++;
		this->_contacts[this->index].add_contact();
	} else {
		std::cout << "too many contacts" << std::endl;
	}
}

void	Phonebook::getContact() {
	int	index;

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;

	for (int i = 0; i <= this->index; i++) {
		this->_contacts[i].show_contact(i);
	}

	std::cout << "Index: ";
	std::cin >> index;

	if (!std::cin.fail() && index >= 0 && index <= this->index) {
		this->_contacts[index].show_all_info();
	} else {
		std::cout << "incorrect index" << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}