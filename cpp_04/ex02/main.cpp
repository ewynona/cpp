#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad*	vlc = new Squad;

	ISquad*	vlc3 = new Squad;
	vlc->push(bob);
	vlc->push(jim);


	*static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);
	*static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);
	*static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);
	*static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);
	*static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);

	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete vlc3;
	return 0;
}