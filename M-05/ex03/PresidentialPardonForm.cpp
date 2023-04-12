
#include "PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm():Form ("Presidential pardon form", 5, 25){ 
	this->target = "default";
	return; }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential pardon form", 5, 25){
	this->target = target;

}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) {
  this->target = other.target;
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
	if (this->getIsSigned() == false)
			throw(Form:: NotSigned());
	if (executor.getGrade() > this->getExecutionGrade())
			throw(Bureaucrat:: GradeTooHighException());
	std::cout<< target << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
	std:: cout << executor.getName() << " executed a " << this->getName() << std:: endl;
	return (true);
  }
