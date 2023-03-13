#include "Contacts.hpp"

int 	str_is_dig(std::string str) {
	for (unsigned long i = 0; i < str.size(); i++) {
		if (!std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

	

void	Contacts::create_contact( int index, bool full ) {
	std::cout << "Adding a new contact\n";
	if (full)
		std::cout << "Contacts list is full, the new contact will replace contact #" << index << "\n";
	set_first_name();
	set_last_name();
	set_nickname();
	set_darkest_secret();
	set_phone_number();
	std::cout << "Contact was successfully added\n";
	return ;
}
void	Contacts::set_darkest_secret(void)
{
	std::cout << "Write his/her darkest secret\n";
	std::string input;
	std::getline(std::cin, input);
	while (input.empty()){
		std::getline(std::cin, input);
	}
	darkest_secret.clear();
	darkest_secret = input;
}

void	Contacts::set_first_name(void)
{
	std::cout << "Write his/her first name\n";
	std::string input;
		std::getline(std::cin, input);
	while (input.empty()){
		std::getline(std::cin, input);
	}
	first_name.clear();
	first_name = input;
}

void	Contacts::set_nickname(void)
{
	std::cout << "Write his/her nickname\n";
	std::string input;
	std::getline(std::cin, input);
	while (input.empty()){
		std::getline(std::cin, input);
		set_phone_number();
	}
	nickname.clear();
	nickname = input;
}

void	Contacts::set_last_name(void)
{
	std::cout << "Write his/her last name\n";
	std::string input;
	std::getline(std::cin, input);
	while (input.empty()){
		std::getline(std::cin, input);
	}
	last_name.clear();
	last_name = input;
}

void	Contacts::set_phone_number(void)
{
	std::cout << "Write his/her phone number\n";
	std::string input;
	std::getline(std::cin, input);
	while (input.empty()){
		std::getline(std::cin, input);
	}
	while (str_is_dig(input) == 0)
	{
		std::cout << "Invalid format for number\n Write his/her phone number \n";
		input.clear();
		while (input.empty()){
			std::getline(std::cin, input);
		}
	}
	phone_number.clear();
	phone_number = input;

}

void	Contacts::print_contact(int index)
{
	
	std::cout <<"         "<<index<<"|";
	print_info(first_name);
	print_info(last_name);
	print_info(nickname);
	
	std::cout <<"\n";
}
void	Contacts::print_info(std::string info)
{
	int len = info.size();
	for (int i = 0; i < 10 - len; i++) {
		std::cout << " ";
	}
	for(int j = 0; j < 9; j++) {
		std::cout << info[j];
		
	}
	if (len == 10){
			std::cout << info[9];
		}
	else if (len > 10) {
			std::cout << ".";	
		}	
	std::cout<<"|";
}

void	Contacts::show_contact_info(void) {
	std::cout << "\e[1;34mFirst Name:\e[0m " << first_name << "\n";
	std::cout << "\e[1;34mLast Name: \e[0m" << last_name << "\n";
	std::cout << "\e[1;34mNickname: \e[0m" << nickname << "\n";
	std::cout << "\e[1;34mPhone Number: \e[0m" << phone_number << "\n";
	std::cout << "\e[1;34mDarkest Secret: \e[0m" << darkest_secret << "\n\n";
}