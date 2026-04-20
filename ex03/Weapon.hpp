#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		/*const Weapon& significa que no modifica el objeto y retorna una referencia*/
		const std::string& getType(void) const;
		void setType(std::string type);
};

#endif