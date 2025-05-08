
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	ind_next_contact = 0;
	for (int i = 0; i < 8; i++)
	{
		contacts[i].set_contact("", "", "", "", "");
	}
}

void	PhoneBook::add_contact()
{
	std::string fn, ln, nn, pn, ds;
	std::cout << "Contact will be added at index " << ind_next_contact << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, fn);
	std::cout << "Last name : ";
	std::getline(std::cin, ln);
	std::cout << "Nickname : ";
	std::getline(std::cin, nn);
	std::cout << "Phone number : ";
	std::getline(std::cin, pn);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, ds);

	if(!fn.empty() && !ln.empty() && !nn.empty() && !pn.empty() && !ds.empty())
	{
		contacts[ind_next_contact].set_contact(fn, ln, nn, pn, ds);
		ind_next_contact = (ind_next_contact + 1) % 8;
		std::cout << "Contact successfully added." << std::endl;
	}
	else
		std::cout << "Contact not added, there is one or several empty fields." << std::endl;
}

void	PhoneBook::search_contact() const
{
	std::cout << std::setw(13) << "Index | "
			  << std::setw(13) << "First name | "
			  << std::setw(13) << "Last name | "
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		contacts[i].print_short(i);
	}
	std::cout << "Enter the index you want to display : ";
	std::string input;
	std::getline(std::cin, input);
	if (input.length() == 1 && isdigit(input[0]))
	{
		int	i = input[0] - '0';
		if (i >= 0 && i < 8)
			contacts[i].print_contact();
		else
			std::cout << "Invalid index" << std::endl;
	}
	else
	{
		std::cout << "Invalid input" << std::endl;
	}
}