#include "Zombie.hpp"

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " dead" << std::endl;
	return ;
}
