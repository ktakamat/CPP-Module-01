#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie2;
	Zombie	zombie("zombie1");

	zombie.announce();
	zombie2 = newZombie("new Zombie2");
	zombie2->announce();
	randomChump("Zombie3");
	delete zombie2;
	return (0);
}
