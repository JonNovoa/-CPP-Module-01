#include "HumanA.hpp"

// _name = nombre pasado
// _weapon = referencia al arma pasada (NO es una copia)
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){}
HumanA::~HumanA(void){}

void HumanA::attack(void)const
{
	std::cout << _name << "attack with their " << _weapon.getType() << std::endl;
}