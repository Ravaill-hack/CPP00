
#include "Contact.hpp"

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
	auto truncate = [](std::string str)
	{
		return (str.length() > 10 ? str.substr(0, 9) + "." : str);
	}
	std::cout << std::setw(10) << index << " | "
			  << std::setw(10) << truncate(firstname) << " | "
			  << std::setw(10) << truncate(lastname) << " | "
			  << std::setw(10) << truncate(nickname) << std::endl
}

void	Contact::print_contact() const
{
	std::out << "First name: " << firstname << std::endl;
	std::out << "Last name: " << lastname << std::endl;
	std::out << "Nickname: " << nickname << std::endl;
	std::out << "Phone number: " << phonenumber << std::endl;
	std::out << "Darkest secret: " << darkestsecret << std::endl;
}
