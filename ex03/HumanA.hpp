#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		// Referencia al arma
		// & = referencia (no es una copia, es el mismo arma)
		// DEBE estar inicializada en el constructor (no puede ser NULL)
		Weapon& _weapon;
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void attack(void) const;

};

#endif