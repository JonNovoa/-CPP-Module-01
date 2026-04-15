#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _name(""){}

Zombie::~Zombie(void)
{
	std::cout << _name << ": Zombie destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}