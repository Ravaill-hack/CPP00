
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	myphonebook;
	std::string	line;

	std::cout << "Type ADD, SEARCH, or EXIT : ";
	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")
			myphonebook.add_contact();
		else if (line == "SEARCH")
			myphonebook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "Type ADD, SEARCH, or EXIT : ";
		std::getline(std::cin, line);
	}
	return (0);
}
