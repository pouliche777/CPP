#include "BitcoinExchange.hpp"



int main (int argc, char **argv){

	if (argc != 2){
		std::cerr << RED_CL << "The input of btc is a path to a file" << DEFAULT_CL << std ::endl;
		exit(EXIT_FAILURE);
	}

		try{
			BitcoinExchange table(static_cast <std::string> (argv[1]));
			table.showMeTheMoney();
		}
		catch(const std::exception& e){
			std::cerr << RED_CL << e.what() << DEFAULT_CL << std ::endl;
			exit(EXIT_FAILURE);
		}

		exit(EXIT_SUCCESS);
}
		