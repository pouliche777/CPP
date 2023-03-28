
#include "Brain.hpp"

// Default constructor
Brain::Brain() {
	std::cout << "Animal constructor called!" << std::endl;
	 return; 
}

// Copy constructor
Brain::Brain(const Brain &other) {
  for(int i = 0; i < 100; i++){
		if(!other.Idea[i].empty())
			this->Idea[i]	= other.Idea[i];
	}
  return;
}

// Copy assignment overload
 Brain &Brain::operator=(const Brain &rhs) {
	if(this->Idea != rhs.Idea){
		for(int i =0; i< 100; i++)
			this->Idea[i] = rhs.Idea[i];
  }
   	return *this;
 }

// Default destructor
Brain::~Brain() { 
	std::cout << "Brain destructor called!!" << std::endl;
	return;
}

void Brain:: setIdea(int index, std::string idea)
{
	if(index <100)
		this->Idea[index] = idea;
}
std::string Brain ::getIdea(int index)const{
		return (this->Idea[index]);
	}