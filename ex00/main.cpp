#include "Zombie.hpp"

int	main(void)
{
	Zombie *Z_1;
	Zombie *Z_2;
	Zombie *Z_3;
	Zombie *Z_4;
	
	Z_1 = newZombie("Undead");
	Z_2 = newZombie("Ghoul");
	Z_3 = newZombie("Orc");
	Z_4 = newZombie("Troll");
	randomChump("Uther");
	randomChump("Arthas");
	randomChump("Sylvanas");
	delete Z_1;
	delete Z_2;
	delete Z_3;
	delete Z_4;
}
