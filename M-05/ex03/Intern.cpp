
#include "Intern.hpp"

// Default constructor
Intern::Intern() { return; }

// Copy constructor
Intern::Intern(const Intern &other) {
  *this = other;
  return;
}

// Copy assignment overload
Intern &Intern::operator=(const Intern &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Intern::~Intern() { return; }

Form *Intern::makeForm(std::string name, std::string target)const{

std::string	form[3] = {"Shrubbery creation form", "Presidential pardon form", "Robotomy request form"};

	int j = -1;
	for (int i = 0; i < 3; i++){
			if (form[i] == name)
				j = i;
	}
	switch(j){
		case 0:{
			return(new ShrubberyCreationForm(target));
		}
		case 1 :{
			return(new RobotomyRequestForm(target));
		}
		case 2:{
			return(new PresidentialPardonForm(target));
		}
		default:{ 
			try{
			throw(Intern::NoForm());
			return(NULL);
			}
			catch(std::exception &e){
				std::cout << name << e.what() << std::endl;
				exit(0);
			}
		}
		
	}
	return (NULL);
}




