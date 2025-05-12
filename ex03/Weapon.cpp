#include "Weapon.hpp"

// constructor
Weapon::Weapon(std::string type) : type(type)
{
}

// getters and setters
std::string const	&Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
