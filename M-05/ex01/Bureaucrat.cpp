
#include "Bureaucrat.hpp"
#include "Form.hpp"

// Default constructor
Bureaucrat::Bureaucrat() { return; }


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
		if (grade < 1)
			throw (GradeTooLowException());
		else if (grade > 150)
			throw (GradeTooHighException());
		this->grade = grade;
}


// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other):name(other.name) {
  *this = other;
  return;
}

// Copy assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  this->grade = rhs.grade;
  return *this;
}

// Default destructor
Bureaucrat::~Bureaucrat() { return; }


//accessors
std::string Bureaucrat::getName()const{
	return(this->name);
}
int	Bureaucrat::getGrade()const{
		return(this->grade);
	}

void Bureaucrat::demotion(){
		if (this->grade + 1 >150)
			throw (GradeTooHighException());
		this->grade = grade+1;
		std::cout << "Bureaucrat " << this->getName() << " lost a rank!" << std::endl;
}

void Bureaucrat::promotion(){

		if (this->grade - 1 < 1)
			throw (GradeTooLowException());
		this->grade = grade -1;
		std::cout << "Bureaucrat " << this->getName() << " got promoted" << std::endl;

}
void Bureaucrat::signForm(Form &form){
			if (this->getGrade() > form.getSignedGrade())
				throw (Bureaucrat::GradeTooHighException());
			else if (form.getIsSigned()== true)
				throw (Form::AlreadySigned());
			else{
				form.setIsSigned();
				std::cout<< this->getName() << " signed " << form.getName() <<  std::endl;
			}
}
std::ostream &operator<<(std::ostream &out,  const Bureaucrat &other){
    out << other.getName() << " bureaucrat grade " << other.getGrade();
    return (out);
}
