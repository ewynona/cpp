#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <ctime>

class ScavTrap {
public:

	ScavTrap(std::string name);
	~ScavTrap();

	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);

private:
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_lvl;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

	static std::string	_messages[5];

};

#endif
