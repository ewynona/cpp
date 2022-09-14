#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon {

public:
	AWeapon(std::string const & name, int apCost, int damage);
	AWeapon(AWeapon const & other);
	virtual ~AWeapon(void);

	AWeapon & operator=(AWeapon const & other);

	std::string const getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack() const = 0;

protected:

	int	_apCost;
	int	_damage;
	std::string	_name;
};

#endif
