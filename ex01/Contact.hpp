
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
		std::string	truncate(std::string str) const;
	public:
		void	set_contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		void	print_short(int index) const;
		void	print_contact() const;
};

#endif