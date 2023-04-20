
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


// Class declaration
class BitcoinExchange {
 public:
  BitcoinExchange(const std::string InputFile);
  BitcoinExchange(const BitcoinExchange &other);
  BitcoinExchange &operator=(const BitcoinExchange &rhs);
  ~BitcoinExchange();

  void showMeTheMoney();


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

 private:
 	const std::string inputFile;
	std::multimap<std::string, double > toConvert;
	std::map<std::string, double > dataBase;
	std::string data;

	void checkDate(std::string)const;
	void checkValue(std::string)const;
	void setDataBase();
	void setToConvert();

 	 BitcoinExchange();
};

#endif // BITCOINEXCHANGE_HPP_
