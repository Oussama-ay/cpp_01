#include "Zombie.hpp"

// getter
std::string Zombie::getName( void ) const
{
	return (name);
}

// setter
void Zombie::setName(std::string name)
{
	this->name = name;
}

// announce member function
void Zombie::announce( void ) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// destructor
Zombie::~Zombie()
{
	std::cout << this->name << ": dies. LOL." << std::endl;
}
