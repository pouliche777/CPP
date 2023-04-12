
#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"
// Class declaration
class PresidentialPardonForm : public Form{
 public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &other);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
  virtual ~PresidentialPardonForm();

  bool virtual execute(Bureaucrat const & executor) const;

 private:
 std::string target;
  
};

#endif // PRESIDENTIALPARDONFORM_HPP_
