#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <ctime>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:

	ScavTrap(std::string name);
	~ScavTrap();

	void		challengeNewcomer(void);

private:
	static std::string	_messages[5];

};

#endif
