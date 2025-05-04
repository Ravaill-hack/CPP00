
#include "Contact.hpp"

std::string	Contact::truncate(std::string str) const
{
	std::string	dest;
	if (str.length() > 10)
	{
		dest = str.substr(0, 9) + ".";
	}
	else
	{
		dest = str;
	}
	return (dest);
}

void	Contact::set_contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	firstname = fn;
	lastname = ln;
	nickname = nn;
	phonenumber = pn;
	darkestsecret = ds;
}

void	Contact::print_short(int index) const
{
	std::cout << std::setw(10) << index << " | "
			  << std::setw(10) << truncate(firstname) << " | "
			  << std::setw(10) << truncate(lastname) << " | "
			  << std::setw(10) << truncate(nickname) << std::endl;
}

void	Contact::print_contact() const
{
	std::cout << "First name: " << firstname << std::endl;
	std::cout << "Last name: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phonenumber << std::endl;
	std::cout << "Darkest secret: " << darkestsecret << std::endl;
}
