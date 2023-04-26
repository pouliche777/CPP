#include "RPN.hpp"
int main (int argc, char **argv){
	
	if (argc != 2){
		std::cerr << RED_CL << "The input of RPN is ONE mathematical operation in reverse polish notation" << DEFAULT_CL << std ::endl;
		exit(EXIT_FAILURE);
	}

		try{
			int result = calculate(static_cast<std::string>(argv[1]));
			std::cout << PINK_CL << "Result is : " << GREEN_CL << result << std::endl;
			
		}
		catch(const std::exception& e){
			std::cerr << RED_CL << e.what() << DEFAULT_CL << std ::endl;
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
}
		