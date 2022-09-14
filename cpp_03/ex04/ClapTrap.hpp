#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <ctime>

class ClapTrap {
public:

	ClapTrap(std::string name);
	~ClapTrap();

	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName();
	std::string	getModel();

protected:
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_lvl;
	std::string	_name;
	std::string	_model;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;


};

#endif
