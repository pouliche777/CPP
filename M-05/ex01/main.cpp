#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
	Form formulaire1("Le taux de graisse dans le steak", 55, 550);
	Form formulaire2("Versailles", 55, -1);
	Form formulaire3("Varennes", 55, 2);
	Bureaucrat Bureaucrat1("Dimitri", 151);
	Bureaucrat Bureaucrat2("Alexei", 0);
	Bureaucrat Bureaucrat3("Vladimir", 55);
	Bureaucrat Bureaucrat4("Boris", 103);
	Bureaucrat Bureaucrat5("Igor", 1);



	Bureaucrat4.signForm(formulaire3);
	Bureaucrat5.signForm(formulaire3);
	Bureaucrat1.demotion();
	Bureaucrat2.promotion();
	Bureaucrat3.demotion();
	Bureaucrat4.promotion();
	Bureaucrat5.promotion();
	formulaire1.beSigned(Bureaucrat1);

	//test pour =overload
	//Bureaucrat1 = Bureaucrat2;
	std::cout << Bureaucrat1 <<std::endl;
	std::cout << Bureaucrat2 <<std::endl;
	std::cout << Bureaucrat3 <<std::endl;
	std::cout << Bureaucrat4 <<std::endl;
	std::cout << Bureaucrat5 <<std::endl;
	std::cout << formulaire3 <<std::endl;
}