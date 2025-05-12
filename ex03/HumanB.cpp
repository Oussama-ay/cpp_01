#include "HumanB.hpp"

// constructor
HumanB::HumanB(std::string name) : name(name), weapon(0)
{
}

// attack method
void	HumanB::attack() const
{
	if (weapon == 0)
	{
		std::cout << name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

// setWeapon method
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
