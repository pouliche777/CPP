#include "PhoneBook.hpp"


PhoneBook::PhoneBook() {
}
PhoneBook::~PhoneBook() {
}
void	PhoneBook::new_contact(void) 
{
	static int index = 0;
	static int full = false;

	if (index == 8)
	{
		index = 0;
		full = true;
	}
	this->contacts[index].create_contact(index, full);
	index++;
}

void	PhoneBook::show_contacts_list(void)
{
	for(int index = 0; index < 8; index++){
		contacts[index].print_contact(index);
	}
	std::cout << "Write the index of the contact you want to check\n";
	std::string input;
	std::getline(std::cin, input);
	while(!(input.length() == 1) || !(std::isdigit(input[0])) || input[0] == '9' || input[0] == '8')
	{
		std::cout << "Wrong index, try again!\n";
		std::getline(std::cin, input);

	}
	int x = input[0];
	contacts[x-48].show_contact_info();
}