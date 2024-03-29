#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main(){

	try{
	RobotomyRequestForm formulaire1("Igor");
	PresidentialPardonForm formulaire2("Boris");
	ShrubberyCreationForm formulaire3("arbustes en fleur");
	Intern pter;
	Bureaucrat Bureaucrat0("Sergei", 2);
	Bureaucrat Bureaucrat1("Dimitri", 2);
	Bureaucrat Bureaucrat2("Alexei", 2);
	Bureaucrat Bureaucrat3("Vladimir", 2);
	Bureaucrat Bureaucrat4("Boris", 2);
	Bureaucrat Bureaucrat5("Igor", 2);
	Form *rikiki;
	
	//rikiki = pter.makeForm("Presidential parukjjkjdon form", "Boulrice");
	rikiki = pter.makeForm("Shrubbery creation form", "Boulrice");
	 rikiki->beSigned(Bureaucrat2);
	 rikiki->execute(Bureaucrat2);
	 
	//Bureaucrat5.signForm(formulaire3);
	// Bureaucrat1.demotion();
	// Bureaucrat2.promotion();
	// Bureaucrat3.demotion();
	// Bureaucrat4.promotion();
	// Bureaucrat5.promotion();
	// formulaire1.beSigned(Bureaucrat2);
	// formulaire2.beSigned(Bureaucrat2);
	// formulaire3.beSigned(Bureaucrat2);
	// Bureaucrat3.executeForm(formulaire2);
	// formulaire1.execute(Bureaucrat1);
	// formulaire2.execute(Bureaucrat2);
	// formulaire3.execute(Bureaucrat1);

	//test pour =overload
	//Bureaucrat1 = Bureaucrat2;
	std::cout << Bureaucrat1 <<std::endl;
	std::cout << Bureaucrat2 <<std::endl;
	std::cout << Bureaucrat3 <<std::endl;
	std::cout << Bureaucrat4 <<std::endl;
	std::cout << Bureaucrat5 <<std::endl;
	std::cout << *rikiki <<std::endl;
	delete rikiki;
	//std::cout << formulaire3 <<std::endl;
	}
	catch(const std::exception& e){
			std::cout << e.what()  << std::endl;
	}
}