#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie_horde;
	int		i;

	i = 0;
	zombie_horde = new Zombie[N];
	while (i < N)
	{
		zombie_horde[i].setname(name);
		i++;
	}
	return (zombie_horde);
}
