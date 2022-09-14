#include <iostream>
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Orc.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Victim *joe = new Peon("Joe");
	Orc hue("Hue");

	std::cout << robert << jim << *joe;
	robert.polymorph(jim);
	robert.polymorph(*joe);
	robert.polymorph(hue);

	Victim *joe2 = new Peon("joe2");
	Victim *joe3 = new Orc("joe3");

	*static_cast<Peon *>(joe) = *static_cast<Peon *>(joe2);
	*static_cast<Peon *>(joe) = *static_cast<Peon *>(joe2);
	*static_cast<Peon *>(joe) = *static_cast<Peon *>(joe3);

	delete joe;
	delete joe2;
	delete joe3;
	return 0;
}
