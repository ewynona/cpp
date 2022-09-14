#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony *pony;

	pony = new Pony("OnTheHeap");
	pony->work();
	delete pony;
}

void	ponyOnTheStack(void) {
	Pony pony("OnTheStack");

	pony.work();
}

int main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return (0);
}