#include "HumanA.hpp"

// constructor
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

// attack method
void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
