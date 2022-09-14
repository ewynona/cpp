#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <ctime>

class FragTrap {
public:

	FragTrap(std::string name);
	~FragTrap();

	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const& target);

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
