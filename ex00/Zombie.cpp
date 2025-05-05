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
	if (name == "Foo")
		std::cout << "Foo";
	else
		std::cout << "<" << this->name << ">";
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// destructor
Zombie::~Zombie()
{
	if (name == "Foo")
		std::cout << "Foo";
	else
		std::cout << "<" << this->name << ">";
	std::cout << "dies. LOL." << std::endl;
}
