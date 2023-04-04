
#include "Form.hpp"
#include "Bureaucrat.hpp"

// Default constructor
Form::Form() {}
 
Form::Form(std::string name, int executionGrade, int signedGrade): name(name){ 
	try{
		if (signedGrade < 1)
			throw (Bureaucrat::GradeTooLowException());
		else if (signedGrade > 150)
			throw (Bureaucrat::GradeTooHighException());
		this->signedGrade = signedGrade;
		this->executionGrade = 150;
		 this->isSigned = false;
	}
	 catch(const std::exception& e){
		std::cout<< this->getName() << e.what() << " Grade will be set to 150, the wrost grade of all!!" << std::endl;
		this->signedGrade = 150;
		this->isSigned = false;
		
	}
	return; 

}

// Copy constructor
Form::Form(const Form &other) {
  *this = other;
  return;
}

// Copy assignment overload
Form &Form::operator=(const Form &rhs) {
  	this->isSigned = rhs.isSigned;
	this->executionGrade = rhs.executionGrade;
	this->signedGrade = rhs.signedGrade;
  return *this;
}

// Default destructor
Form::~Form() { return; }

// Accessors
int Form:: getExecutionGrade()const{
	return (this->executionGrade);
}
bool Form:: getIsSigned()const{
	return(this->isSigned);
}
int  Form:: getSignedGrade()const{
	return(this->signedGrade);
}
std::string Form:: getName()const{
	return(this->name);
}
//cout overload

std::ostream &operator<<(std::ostream &out,  const Form &other){
    out << "----Form name : " << other.getName() <<" ----Execution grade : " << other.getExecutionGrade() <<
	 " ----Signature Grade : " <<  other.getSignedGrade() << " ----Form is ";
	 if (other.getIsSigned() == true)
	  	out <<  "signed";
	else 
		out<<  "unsigned";

    return (out);
}

void	Form::beSigned(Bureaucrat const & b){

	try{
		if(b.getGrade() > this->getSignedGrade())
			throw(Bureaucrat::GradeTooHighException());
		this->isSigned = true;
	}
	catch(const std::exception& e){
		std::cout<< b.getName() << e.what()
		 << "don't have the permission to sign this form " << std::endl;
	}
}
void Form::setIsSigned(){
	this->isSigned= true;
}

