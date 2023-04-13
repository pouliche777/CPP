
#ifndef SPAN_HPP_
#define SPAN_HPP_
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

class Span {
 public:
  
  Span(unsigned int sizeC);
  Span(const Span &other);
  Span &operator=(const Span &rhs);
  ~Span();
  void	addNumber(int);
  void	addNumber(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
  unsigned int longestSpan(void)const;
	unsigned int shortestSpan(void)const;

 private:
  std::vector<int> container;
  unsigned int sizeC;
  Span();
};

#endif // SPAN_HPP_
