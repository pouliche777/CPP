#include "BitcoinExchange.hpp"



int main (int argc, char **argv){

	if (argc != 2){
		std::cerr << "The input of btc is a path to a file" << std ::endl;
		exit(EXIT_FAILURE);
	}

		try{
			BitcoinExchange table(static_cast <std::string> (argv[1]));
			table.showMeTheMoney();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std ::endl;
			exit(EXIT_FAILURE);
		}

		exit(EXIT_SUCCESS);
}
		