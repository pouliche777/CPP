
#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"
#include <fstream>
// Class declaration
class ShrubberyCreationForm : public Form{
 public:
  ShrubberyCreationForm();

  ShrubberyCreationForm(const std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
  virtual ~ShrubberyCreationForm();

  bool execute(Bureaucrat const & executor) const;

 private:
 	std::string target;
  
};

#endif // SHRUBBERYCREATIONFORM_HPP_
