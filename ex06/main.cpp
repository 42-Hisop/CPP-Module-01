#include "Karen.hpp"

int	getlevel(std::string find)
{
	std::string	level[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (find == level[i])
			return (i);
	}
	return (4);
}

int	main(int argc, char **argv)
{
	Karen	Karen;
	int	level;

	if (argc != 2)
	{
		std::cout << "input not 1" << std::endl;
		return (0);
	}
	level = getlevel(argv[1]);
	switch (level)
	{
		case 0:
			Karen.complain("DEBUG");
		case 1:
			Karen.complain("INFO");
		case 2:
			Karen.complain("WARNING");
		case 3:
			Karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);	
}
