#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);

	void	attack();

private:
	Weapon		&_weapon;
	std::string	_name;
};

#endif
