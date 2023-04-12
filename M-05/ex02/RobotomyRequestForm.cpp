
#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm():Form ("Robotomy request form", 45, 72){ 
	this->target = "default";
	return; }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy request form", 45, 72){
	this->target = target;

}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {
  this->target= other.target;
  *this = other;
  return;
}

// Copy assignment overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
  (void)rhs;
  return *this;
}

bool RobotomyRequestForm :: execute(Bureaucrat const & executor)const{

		if (this->getIsSigned() == false)
			throw(Form:: NotSigned());
		if (executor.getGrade() > this->getExecutionGrade())
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
	std:: cout << executor.getName() << " executed a " << this->getName() << std:: endl;
	return(true);
}
// Default destructor
RobotomyRequestForm::~RobotomyRequestForm() { return; }
