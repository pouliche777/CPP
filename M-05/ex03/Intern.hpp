
#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
// Class declaration
class Intern {
 public:
  Intern();
  Intern(const Intern &other);
  Intern &operator=(const Intern &rhs);
  ~Intern();
	Form *makeForm(std::string name, std::string target)const;

	public :
		class NoForm : public std::exception{
			public:
				virtual const char* what()const throw() {
				
					return(" form does not exist!!");
				}
 private:
  
	};
};
#endif // INTERN_HPP_
