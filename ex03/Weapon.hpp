#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class	Weapon
{
private:
	std::string type;

public:
	// constructor
	Weapon(std::string type);
	// getters and setters
	std::string const &getType() const;
	void setType(std::string type);
};

#endif