#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "memory address str : " << &str << std::endl;
	std::cout << "memory address stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string variable : " << str << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return (0);
}
