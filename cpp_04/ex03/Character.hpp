#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

public:
	Character(std::string name);
	Character(Character const & other);
	~Character();

	Character & operator=(Character const & other);

	std::string const & getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
	void	inventoryCheck(int idx);

private:

	std::string	_name;
	AMateria*	_inventory[4];
	int			_equippedSlots;

};

#endif
