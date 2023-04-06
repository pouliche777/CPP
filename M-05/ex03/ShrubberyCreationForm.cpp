
#include "ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(){
	this->name  = "Shrubbery creation form"; 
	this->target = "DEFAULT";
	this->executionGrade = 137;
	this->signedGrade = 145;
	 }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) { 
	this->name  = "Shrubbery creation form";
	this->target = target;
	this->executionGrade = 137;
	this->signedGrade = 145;
	
	 }

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) {
  *this = other;
  return;
}

// Copy assignment overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm() { return; }

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
			if (this->isSigned == false)
				throw(Form:: NotSigned());
			if (executor.getGrade() > this->executionGrade)
				throw(Bureaucrat:: GradeTooHighException());
			
			std::ofstream outFile(target);
			if (outFile.is_open()){	
				outFile << " Rhododendron   Azalea  Camellia   Holly  Forsythia   Hydrangea  Lilac  Juniper " << std::endl;
				outFile.close();
			}
			else 
				std::cout << "Could not create the file" << std::endl;
	std:: cout << executor.getName() << " executed a " << this->getName() << std:: endl;
	return(true);

	}
