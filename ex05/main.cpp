#include "Harl.hpp"

int main (void)
{
	Harl check;

	std::cout << "\n DEBUG Level " << std::endl;
	check.complain("DEBUG");
	std::cout << "\n INFO Level " << std::endl;;
	check.complain("INFO");
	std::cout << "\n WARNING Level " << std::endl;
	check.complain("WARNING");
	std::cout << "\n ERROR Level " << std::endl;
	check.complain("ERROR");
	std::cout << "\n Not In Option" << std::endl;
	check.complain("asrtyukgfds");
	return (0);
}
