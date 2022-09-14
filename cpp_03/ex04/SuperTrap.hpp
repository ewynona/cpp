#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:

	SuperTrap(std::string name);
	~SuperTrap();

	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
};

#endif
