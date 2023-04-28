
#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <regex>
#include <iomanip>
#include <chrono>
#include <ctime>

#define BLUE_CL "\033[1;36m"
#define WHITE_CL "\033[0;37m"
#define RED_CL "\033[0;31m"
#define YELLOW_CL "\033[0;33m"
#define PINK_CL "\033[38;2;255;192;203m"
#define GREEN_CL "\033[0;32m"
#define DEFAULT_CL "\033[0m"

// Class declaration
class BitcoinExchange {
	public:
		BitcoinExchange(const std::string InputFile);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		~BitcoinExchange();

  		void showMeTheMoney();
	private:
		const std::string inputFile;
		std::multimap<std::string, double > toConvert;
		std::map<std::string, double > dataBase;
		std::string data;

		void checkDate(std::string)const;
		void setDataBase();
		void setToConvert();

 		BitcoinExchange();

	class BadFile : public std::exception{
			public:
				virtual const char* what()const throw() {
					return("Something is wrong with the file!! ");
				}
	};
	class BadFormat : public std::exception{
		public:
			virtual const char* what()const throw() {
				return("The format of your inputfile is WRONG! ");
			}
	};
	class WrongDate : public std::exception{
		public:
			virtual const char* what()const throw() {
				return("Invalid date in the inputfile! ");
			}
	};
	class WrongValue : public std::exception{
		public:
			virtual const char* what()const throw() {
				return("The value is too high, it must be between 0 and 1000! ");
			}
	};
};

#endif // BITCOINEXCHANGE_HPP_
