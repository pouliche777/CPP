
#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <stdexcept>
// Class declaration
class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat();

		std::string getName()const;
		int	getGrade()const;
		void demotion();
		void promotion();
	
	private:
		const std::string name;
		int grade;


	public :
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what()const throw() {
				
					return(" grade is too low! ");
			}
		};
		class GradeTooHighException : public std::exception{
			public:
				virtual  const char* what() const throw() {
					return(" grade is too High! ");
			}
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif // BUREAUCRAT_HPP_
