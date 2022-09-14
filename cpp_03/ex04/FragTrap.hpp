#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:

	FragTrap(std::string name);
	~FragTrap();

	void		vaulthunter_dot_exe(std::string const& target);

private:
	static std::string	_messages[5];
};

#endif
