
#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

// Class declaration
template<typename T, class Container = std::deque< T > >
class MutantStack : public  std::stack< T, Container > {
 public:
  MutantStack(){}
  MutantStack(const MutantStack &other){
	 *this =other;
 }
  MutantStack &operator=(const MutantStack &rhs){
	if (this != rhs)
		return(*this);
  }
  virtual ~MutantStack(){}
	
	typedef typename Container::iterator iterator;


	 iterator begin(){
		return this->c.begin();
	}
	 iterator end(){
		return this->c.end();
	}
	// typename Container::iterator MutantStack<T, Container>::begin() {
    // 	return this->c.begin();
	// }

	// typename Container::iterator MutantStack<T, Container>::end() {
    // 	return this->c.end();
	// }
	
  
};


#endif // MUTANTSTACK_HPP_
