#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies;
	int num = 5;

	zombies = zombieHorde(num, "zombies");
	for (int i = 0; i < num; i++)
		zombies->announce();
	delete[] zombies;
}
