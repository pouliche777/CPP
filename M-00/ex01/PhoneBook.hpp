#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <string>
#include <iostream>

class PhoneBook {

	public:
		PhoneBook(){

		}
	 	void	show_contacts_list(void);
		void	new_contact(void);
		Contacts	contacts[8];
		
       ~PhoneBook();
	private :

};

#endif