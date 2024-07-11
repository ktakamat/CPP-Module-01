#include "Zombie.hpp"

int	main(void)
{
	Zombie	*machi;
	int		N;
	int		i;

	N = 7;
	i = 0;
	try
	{
		machi = zombieHorde(N, "machi");
		while (i < N)
		{
			std::cout << "Zombie number: " << i << "   ";
			machi[i].announce();
			i++;
		}
		delete[] machi;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
