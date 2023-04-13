#include "Span.hpp"
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	   std::vector<int>    vec(10001);
        std::srand(time(NULL));
        std::generate( vec.begin(), vec.end(), std::rand );

        Span span( vec.size() );
		span.addNumber( vec.begin(), vec.end() );

        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	return 0;
}
