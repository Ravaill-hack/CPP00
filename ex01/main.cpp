
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	myphonebook;
	std::string	line;

	std::out << "Type ADD, SEARCH, or EXIT : ";
	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")

		else if (line == "SEARCH")

		else
			std::cout << "Invalid command" << std::endl;
		std::out << "Type ADD, SEARCH, or EXIT : ";
		std::getline(std::cin, line);
	}
	return (0);
}
