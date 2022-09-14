#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main2(void)
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* src2 = new MateriaSource();

	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	*static_cast<MateriaSource *>(src2) = *static_cast<MateriaSource *>(src);
	*static_cast<MateriaSource *>(src2) = *static_cast<MateriaSource *>(src);

	delete src2;
	ICharacter* you = new Character("me");
	ICharacter* me;

	me = you;

	AMateria* tmp = nullptr;
	AMateria* other = new Ice;
	tmp = src->createMateria("snow");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	*static_cast<Ice *>(other) = *static_cast<Ice *>(tmp);
	std::cout << other << std::endl;
	std::cout << tmp << std::endl;
	me->equip(other);
	delete(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	me->equip(nullptr);

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	std::cout << "materia exp: " << other->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << other->getXP() << std::endl;

	me->unequip(-1);
	for (int i = 0; i < 10; i++) {
		me->inventoryCheck(i);
		me->use(i, *bob);
	}

	std::cout << std::endl;
	me->unequip(0);
	std::cout << "materia exp: " << other->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << other->getXP() << std::endl;
	me->use(3, *bob);
	me->unequip(-1);
	*static_cast<Character *>(bob) = *static_cast<Character *>(me);

	delete bob;
	delete me;
	delete src;
	delete other;

	return (0);
}

int main(void) {
	main2();
	while (1) {}
	return (0);
}