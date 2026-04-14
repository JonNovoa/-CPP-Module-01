#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	Zombie* horde = zombieHorde(5, "Zombie");

	std::cout << "\n Making zombies " << std::endl;
	for(int i = 0; i < 5; i++)
		horde[i].announce();

	std::cout << "\n Deleting horde " << std::endl;
	delete[] horde;

	std::cout << "\n Other horder " << std::endl;
	Zombie* smallHorde = zombieHorde(3, "SmallZombie");
	for(int i = 0; i < 3; i++)
		smallHorde[i].announce();
	delete[] smallHorde;

	std::cout << "\nDone " << std::endl;
	return 0;
}