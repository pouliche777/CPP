
#include "Form.hpp"
#include "Bureaucrat.hpp"

// Default constructor
Form::Form() :name ("DEFAULT"),executionGrade(0) ,signedGrade(0)   { 
	
	return; }
Form::Form(std::string name, int executionGrade, int signedGrade): name(name), executionGrade(executionGrade), signedGrade(signedGrade){ 
		if (signedGrade < 1)
			throw (Form::GradeTooHighException());
		else if (signedGrade > 150)
			throw (Form::GradeTooLowException());
		 this->isSigned = false;
	return; 
}

// Copy constructor
Form::Form(const Form &other):name(other.getName()),executionGrade(other.getExecutionGrade()), signedGrade(other.getSignedGrade())  {
  *this = other;
  return;
}

// Copy assignment overload
Form &Form::operator=(const Form &rhs) {
	isSigned = rhs.getIsSigned();
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
	if(b.getGrade() > this->getSignedGrade())
			throw(Bureaucrat::GradeTooHighException());
		this->isSigned = true;
}
void Form::setIsSigned(){
	this->isSigned= true;
}

