#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <string>
#include <iostream>

class PhoneBook {

	public:
   		PhoneBook();
		~PhoneBook();
	 	void	show_contacts_list(void);
		void	new_contact(void);

	private :
		Contacts	contacts[8];
		int			index;
		bool		full;

};

#endif
