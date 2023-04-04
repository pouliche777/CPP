
#include "bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat() { return; }


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	try{
		if (grade < 1)
			throw (GradeTooLowException());
		else if (grade > 150)
			throw (GradeTooHighException());
		this->grade = grade;
	}
	catch(const std::exception& e){
		std::cout<< this->getName() << e.what() << " Grade will be set to 150, the wrost grade of all!!" << std::endl;
		this->grade = 150;
	}
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
	try{
		if (this->grade + 1 >150)
			throw (GradeTooHighException());
		this->grade = grade+1;
		std::cout << "Bureaucrat " << this->getName() << " lost a rank!" << std::endl;
		}
	catch(const std::exception& e){
			std::cout<< this->getName() << e.what() << "this damn bureaucrat cannot be demoted!" << std::endl;
	}
}
void Bureaucrat::promotion(){
	try{
		if (this->grade - 1 < 1)
			throw (GradeTooLowException());
		this->grade = grade -1;
		std::cout << "Bureaucrat " << this->getName() << " got promoted" << std::endl;
		}
	catch(const std::exception& e){
			std::cout<< this->getName() << e.what() << "this damn bureaucrat cannot be promoted he is already a super bureaucrat!!" << std::endl;
	}
}
std::ostream &operator<<(std::ostream &out,  const Bureaucrat &other){
    out << other.getName() << " bureaucrat grade " << other.getGrade();
    return (out);
}
