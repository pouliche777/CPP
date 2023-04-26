
#include "PmergeMe.hpp"
int main(int argc, char **argv){
	
	if (argc < 2){
		std::cerr << RED_CL << "You must enter a integers sequence" << DEFAULT_CL << std::endl;
		 exit(EXIT_FAILURE);
	}
	std::string args[argc];

	for(int i = 1; i<argc; i++)
	args[i] = static_cast<std::string> (argv[i]);
	try{
		PmergeMe toMerge(args, argc);
		toMerge.sortVec();
		toMerge.sortList();
	}
	catch(std::exception &e){
		std::cerr << RED_CL << e.what() << DEFAULT_CL << std ::endl;
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}