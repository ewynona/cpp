#include "contact.hpp"

const	std::string Contact::_fields[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret",
};

void	Contact::add_contact() {
	for (int i = 0; i < 11; i++) {
		std::cout << this->_fields[i] << ": ";
		getline(std::cin, this->_contact_info[i]);
	}
}

void	Contact::show_all_info() {
	for (int i = 0; i < 11; i++) {
		std::cout << this->_fields[i] << ": ";
		std::cout << this->_contact_info[i] << std::endl;
	}
}

void	Contact::show_contact(int index) {
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			std::cout << "|";
			std::cout << std::setw(10) << index << "|";
		}
		if (this->_contact_info[i].length() > 10) {
			std::cout << std::setw(10) << this->_contact_info[i].substr(0, 9) + "." << "|";
		} else {
			std::cout << std::setw(10) << this->_contact_info[i] << "|";
		}
	}

	std::cout << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}
