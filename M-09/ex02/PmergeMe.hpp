
#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#define BLUE_CL "\033[1;36m"
#define WHITE_CL "\033[0;37m"
#define RED_CL "\033[0;31m"
#define YELLOW_CL "\033[0;33m"
#define PINK_CL "\033[38;2;255;192;203m"
#define GREEN_CL "\033[0;32m"
#define DEFAULT_CL "\033[0m"



// Class declaration
class PmergeMe {
 public:
	PmergeMe(std::string args[], int argc);
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &rhs);
	~PmergeMe();

	void sortVec();
	void sortList();

 private:
	PmergeMe();
	void setVec(const std::string[], const int);
	void setList(const std::string[], const int);
	std::vector<int> vectInt;
	std::list<int> listInt;
	double timeToManageVec;
	double timeToManageList;
	
};

#endif // PMERGEME_HPP_
