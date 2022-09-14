#ifndef NINJA_HPP
# define NINJA_HPP
# include <iostream>
# include <ctime>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
public:

	NinjaTrap(std::string name);
	~NinjaTrap();

	void	ninjaShoebox(FragTrap &trap);
	void	ninjaShoebox(ScavTrap &trap);
	void	ninjaShoebox(ClapTrap &trap);
	void	ninjaShoebox(NinjaTrap &trap);
};

#endif
