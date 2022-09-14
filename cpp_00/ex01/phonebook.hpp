#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"
# include <iomanip>
# include <iostream>

class Phonebook {
public:

	Phonebook();

	void	setContact();
	void	getContact();

private:
	void	show_contacts();
	int		index;
	Contact	_contacts[8];
};

#endif