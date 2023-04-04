#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main(){
	RobotomyRequestForm formulaire1("Igor");
	PresidentialPardonForm formulaire2("Boris");
	ShrubberyCreationForm formulaire3("arbustes en fleur");
	Intern pter;
	//Form formulaire2("Versailles", 55, -1);
	//Form formulaire3("Varennes", 55, 2);
	Bureaucrat Bureaucrat0("Sergei", 151);
	Bureaucrat Bureaucrat1("Dimitri", 148);
	Bureaucrat Bureaucrat2("Alexei", 1);
	Bureaucrat Bureaucrat3("Vladimir", 55);
	Bureaucrat Bureaucrat4("Boris", 103);
	Bureaucrat Bureaucrat5("Igor", 5);
	Form *rikiki;
	
	rikiki = pter.makeForm("Presidential parukjjkjdon form", "Boulrice");
	rikiki->beSigned(Bureaucrat2);
	rikiki->execute(Bureaucrat2);

	delete rikiki;




	
	//Bureaucrat5.signForm(formulaire3);
	Bureaucrat1.demotion();
	Bureaucrat2.promotion();
	Bureaucrat3.demotion();
	Bureaucrat4.promotion();
	Bureaucrat5.promotion();
	formulaire1.beSigned(Bureaucrat2);
	formulaire2.beSigned(Bureaucrat2);
	//formulaire3.beSigned(Bureaucrat2);
	Bureaucrat3.executeForm(formulaire2);
	formulaire1.execute(Bureaucrat1);
	formulaire2.execute(Bureaucrat2);
	formulaire3.execute(Bureaucrat1);

	//test pour =overload
	//Bureaucrat1 = Bureaucrat2;
	std::cout << Bureaucrat1 <<std::endl;
	std::cout << Bureaucrat2 <<std::endl;
	std::cout << Bureaucrat3 <<std::endl;
	std::cout << Bureaucrat4 <<std::endl;
	std::cout << Bureaucrat5 <<std::endl;
	//std::cout << formulaire3 <<std::endl;
}