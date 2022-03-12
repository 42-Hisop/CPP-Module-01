#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		void	attack();
		
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
	private:
		Weapon &_weapon;
		std::string	_name;
};

#endif