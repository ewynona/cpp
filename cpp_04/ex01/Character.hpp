#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

public:
	Character(std::string const & name);
	Character(Character const & other);
	~Character();

	Character & operator=(Character const & other);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	std::string getName() const;
	AWeapon	*getWeapon() const;
	int		getAp() const;
};

std::ostream &operator<<(std::ostream &out, Character const &src);

#endif
