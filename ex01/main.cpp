#include "Zombie.hpp"

int	main( void )
{
	Zombie	*ZombieHorde;
	int		N;

	std::cout << "Enter the number of zombies: ";
	std::cin >> N;
	if (N <= 0)
	{
		std::cout << "Invalid number of zombies." << std::endl;
		return (1);
	}
	ZombieHorde = zombieHorde(N, "Addame");
	for (int i = 0; i < N; i++)
	{
		ZombieHorde[i].announce();
	}
	delete[] ZombieHorde;
	return (0);
}
