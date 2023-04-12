#include "bureaucrat.hpp"
int main(){
	try{
	Bureaucrat Bureaucrat1("Dimitri", 149);
	Bureaucrat Bureaucrat2("Alexei", 2);
	Bureaucrat Bureaucrat3("Vladimir", 55);
	Bureaucrat Bureaucrat4("Boris", 103);
	Bureaucrat Bureaucrat5("Igor", 3);


	Bureaucrat1.demotion();
	Bureaucrat2.promotion();
	Bureaucrat3.demotion();
	Bureaucrat4.promotion();
	Bureaucrat5.promotion();
	//test pour =overload
	//Bureaucrat1 = Bureaucrat2;
	std::cout << Bureaucrat1 <<std::endl;
	std::cout << Bureaucrat2 <<std::endl;
	std::cout << Bureaucrat3 <<std::endl;
	std::cout << Bureaucrat4 <<std::endl;
	std::cout << Bureaucrat5 <<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std ::endl;
	}
}