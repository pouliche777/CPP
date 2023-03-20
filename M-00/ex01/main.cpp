#include "PhoneBook.hpp"


int main(void)
{
	PhoneBook phonebook;
	std::string input;
	
	std::cout << " Hello! please enter one of the following command : ADD, SEARCH or EXIT.\n";
	std::getline(std::cin, input);
	while (input != "EXIT"){
		if (input == "ADD")
			phonebook.new_contact();
		else if (input == "SEARCH")
			phonebook.show_contacts_list();
		else 
			std::cout << "Bad input\n";
		std::cout << " Hello! please enter one of the following command : ADD, SEARCH or EXIT.\n";
		std::cout << " Type a command please! ";
		std::getline(std::cin, input);
	}
	std::cout << " Good night sweet prince! ";
	return 0;
	

}
