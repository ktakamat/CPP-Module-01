#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
