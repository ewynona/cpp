#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "HugeSqueak.hpp"
#include "Blaster.hpp"

int main()
{
	Character* me = new Character("me");
	Character* you = new Character("you");
	Character* she(you);

	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new HugeSqueak();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* bl = new Blaster();

	me->equip(pr);
	std::cout << *me;
	me->equip(bl);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	she->equip(pr);
	she->attack(c);
	std::cout << *she;
	she->attack(d);
	she->equip(bl);
	std::cout << *she;

	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);

	*static_cast<Blaster *>(pr) = *static_cast<Blaster *>(bl);
	*static_cast<Blaster *>(pr) = *static_cast<Blaster *>(bl);
	*static_cast<Blaster *>(pr) = *static_cast<Blaster *>(bl);

	delete me;
	delete she;
	delete pr;
	delete pf;
	delete bl;

	return 0;
}
