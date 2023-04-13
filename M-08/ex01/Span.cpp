
#include "Span.hpp"



Span::Span(unsigned int sizeC) : container(0), sizeC(sizeC){}
// Copy constructor
Span::Span(const Span &other) {
  *this = other;
  return;
}

// Copy assignment overload
Span &Span::operator=(const Span &rhs) {
  if(this != &rhs){
	this->container = rhs.container;
	this->sizeC = rhs.sizeC;
  }
  return *this;
}

// Default destructor
Span::~Span() { return; }

void	Span::addNumber(int intAdd){
	if(this->container.size() >= this->sizeC)
		throw(std::out_of_range("vector is full!"));
	this->container.push_back(intAdd);
}
void	Span::addNumber(std::vector<int>::const_iterator itBegin, std::vector<int>::const_iterator itEnd){
	if( (sizeC - container.size()) - std::distance(itBegin, itEnd) < 0)
		throw(std::out_of_range("vector is full!"));
	this->container.insert(container.end(), itBegin, itEnd);
}
unsigned int Span::longestSpan(void) const{
	int n= this->container.size();
	int maxDistance = 0;
	if (n < 2)
		throw(std::out_of_range("Vector is empty or contains only one element!"));
	for(int i=0; i< n; i++){
		for(int j =i+1; j<n; j++){
			int dist =abs(container[i] -container[j]);
			if(dist > maxDistance)
				maxDistance = dist;
		}
	}
	return (static_cast<unsigned int>(maxDistance));
}
unsigned int Span::shortestSpan(void) const{
	int n= this->container.size();
	int minDistance = longestSpan();
	if (n < 2)
		throw(std::out_of_range("Vector is empty or contains only one element!"));
	for(int i=0; i< n; i++){
		for(int j =i+1; j<n; j++){
			int dist =abs(container[i] -container[j]);
			if(dist < minDistance)
				minDistance = dist;
		}
	}
	return (static_cast<unsigned int>(minDistance));
}
