
#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm() { 
	this->name  = "Robotomy request form";
	this->target = "DEFAULT";
	this->executionGrade = 45;
	this->signedGrade = 72;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target){
	this->name  = "Robotomy request form";
	this->target = target;
	this->executionGrade = 45;
	this->signedGrade = 72;
 }

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) {
  *this = other;
  return;
}

// Copy assignment overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
  (void)rhs;
  return *this;
}

bool RobotomyRequestForm :: execute(Bureaucrat const & executor)const{

	try{
		if (this->isSigned == false)
			throw(Form:: NotSigned());
		if (executor.getGrade() > this->executionGrade)
			throw(Bureaucrat:: GradeTooHighException());
		std:: cout << "bizzzzzzzzz zormmmmmmmm  (drill noises)" << std:: endl;
		std::random_device rd;
    	std::mt19937 gen(rd());
    	std::uniform_int_distribution<int> dis(0, 1);
		int res = dis(gen);
		if (res){
			std:: cout << "Robotomy of " << this->target << " completed!!" << std:: endl;
		}
		else
			std:: cout << "Robotomy of " << this->target << " failed!!" << std:: endl;
	}
	

	catch(const std::exception &e){
		std::cout<< executor << " could not execute the Robotomy because his/her"  << e.what() << std::endl;
		return(false);
	}
	std:: cout << executor.getName() << " executed a " << this->getName() << std:: endl;
	return(true);
}
// Default destructor
RobotomyRequestForm::~RobotomyRequestForm() { return; }
