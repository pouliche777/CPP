
#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"
#include <random>
// Class declaration
class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(const std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &other);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

  bool  virtual execute(Bureaucrat const & executor)const;
  ~RobotomyRequestForm();

 private:
  
};

#endif // ROBOTOMYREQUESTFORM_HPP_
