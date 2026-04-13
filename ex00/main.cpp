#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	std::cout << "=== Stack allocation ===" << std::endl;
	randomChump("StackZombie");

	std::cout << "\n=== Heal allocation ===" << std::endl;
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	std::cout << "\nDone" << std::endl;

	return 0;
}