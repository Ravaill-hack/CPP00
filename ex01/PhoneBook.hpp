
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int		ind_next_contact;
	public
		PhoneBook();
		void	add_contact();
		void	search_contact() const;
};

#endif