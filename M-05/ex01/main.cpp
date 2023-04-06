#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
try{
	Form formulaire1("Le taux de graisse dans le steak", 55, 4);
	Form formulaire2("Versailles", 55, 3);
	Form formulaire3("Varennes", 55, 2);
	Bureaucrat Bureaucrat1("Dimitri", 2);
	Bureaucrat Bureaucrat2("Alexei", 2);
	Bureaucrat Bureaucrat3("Vladimir", 2);
	Bureaucrat Bureaucrat4("Boris", 2);
	Bureaucrat Bureaucrat5("Igor",2);



	Bureaucrat4.signForm(formulaire3);
	Bureaucrat5.signForm(formulaire2);
	Bureaucrat1.demotion();
	Bureaucrat2.promotion();
	Bureaucrat3.demotion();
	Bureaucrat4.promotion();
	Bureaucrat5.promotion();
	formulaire1.beSigned(Bureaucrat1);

	std::cout << Bureaucrat1 <<std::endl;
	std::cout << Bureaucrat2 <<std::endl;
	std::cout << Bureaucrat3 <<std::endl;
	std::cout << Bureaucrat4 <<std::endl;
	std::cout << Bureaucrat5 <<std::endl;
	std::cout << formulaire3 <<std::endl;
}
catch(const std::exception& e){
	std::cerr << e.what() << std ::endl;

}
}