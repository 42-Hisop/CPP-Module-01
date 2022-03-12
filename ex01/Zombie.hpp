#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		void	announce(void) const;
		void	setName(std::string);
		
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

	private:
		std::string _name;
};

Zombie *zombieHorde(int num, std::string name);

#endif
