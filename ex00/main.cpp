#include "Zombie.hpp"

int	main( void )
{
	std::string name;

	std::cout << "Creating zombie on the stack.\n";
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;
	randomChump(name);

	std::cout << "Creating zombie on the heap.\n";
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;
	Zombie *zombi2 = newZombie(name);
	zombi2->announce();
	delete	zombi2;

	return (0);
}
