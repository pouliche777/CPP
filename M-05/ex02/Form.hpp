
#ifndef FORM_HPP_
#define FORM_HPP_

#include "Bureaucrat.hpp"
// Class declaration
class Bureaucrat;
class Form {
 public:
	Form();
	Form(std::string name, int executionGrade, int signedGrade);
	Form(const Form &other);
	Form &operator=(const Form &rhs);
	~Form();
// accessors
	std::string getName()const;
	int getExecutionGrade()const;
	bool getIsSigned()const;
	int getSignedGrade()const;
	void setIsSigned();

	void	beSigned(const  Bureaucrat & b);
	virtual bool execute(Bureaucrat const & executor)const = 0;

 private:
	const std::string name;
	bool isSigned;
	const int executionGrade;
	const int signedGrade;


	public :
		class AlreadySigned : public std::exception{
			public:
				virtual const char* what()const throw() {
				
					return("Form is already sign! ");
				}
		};
		class NotSigned : public std::exception{
			public:
				virtual const char* what()const throw() {
				
					return("Form was not signed!!!! ");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what()const throw() {
				
					return(" Form grade is too low! ");
			}
		};
		class GradeTooHighException : public std::exception{
			public:
				virtual  const char* what() const throw() {
					return(" Form grade is too High! ");
			}
		};
};

std::ostream &operator<<(std::ostream &out,  const Form &other);

#endif // FORM_HPP_
