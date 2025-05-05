#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	~Zombie();

	void setName(std::string name);
	std::string getName( void ) const;

	void announce( void ) const;
};

Zombie	*zombieHorde( int N, std::string name );

#endif
