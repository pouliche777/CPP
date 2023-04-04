
#ifndef BRAIN_HPP_
#define BRAIN_HPP_
#include <iostream>
// Class declaration
class Brain {
 public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &rhs);
	virtual ~Brain();
	
	void setIdea(int index, std::string idea);
	std::string getIdea(int index)const;
 private:
  	std::string Idea[100];
};

#endif // BRAIN_HPP_
