#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact {
public:

	void	add_contact();
	void	show_contact(int index);
	void	show_all_info();

private:

	std::string	_contact_info[11];

	static const std::string _fields[11];
};

#endif