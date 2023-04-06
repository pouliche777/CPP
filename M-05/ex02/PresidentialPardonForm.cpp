
#include "PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm() { 
	this->name  = "Presidential pardon form";
	this->target = "DEFAULT";
	this->executionGrade = 5;
	this->signedGrade = 25;
	return; }

PresidentialPardonForm::PresidentialPardonForm(std::string target){
	this->name  = "Presidential pardon form";
	this->target = target;
	this->executionGrade = 5;
	this->signedGrade = 25;

}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) {
  *this = other;
  return;
}

// Copy assignment overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
PresidentialPardonForm::~PresidentialPardonForm() { return; }

  bool PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->isSigned == false)
			throw(Form:: NotSigned());
	if (executor.getGrade() > this->executionGrade)
			throw(Bureaucrat:: GradeTooHighException());
	std::cout<< target << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
	std:: cout << executor.getName() << " executed a " << this->getName() << std:: endl;
	return (true);
  }
