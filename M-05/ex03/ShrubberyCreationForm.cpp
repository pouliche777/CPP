
#include "ShrubberyCreationForm.hpp"

// Default constructor

ShrubberyCreationForm::ShrubberyCreationForm():Form ("Shrubbery creation form", 137, 145){ 
	this->target = "default";
	return; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery creation form", 137, 145){
	this->target = target;

}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
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
			if (this->getIsSigned() == false)
					throw(Form:: NotSigned());
			if (executor.getGrade() > this->getExecutionGrade())
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
