#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "string adress : " << &str << std::endl;
	std::cout << "stringPTR adress : " << stringPTR << std::endl;
	std::cout << "stringREF adress : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string : " << str << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return (0);
}
