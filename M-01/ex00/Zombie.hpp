#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

class Zombie {

	public:
		
		Zombie(std::string name);
		~Zombie();
		void announce();
	private :
		std::string name;
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif