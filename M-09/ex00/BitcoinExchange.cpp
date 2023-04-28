
#include "BitcoinExchange.hpp"

//  constructor
BitcoinExchange::BitcoinExchange(std::string inputFile) : inputFile(inputFile) {
		data = "data.csv";
		setDataBase();
		setToConvert();

 }

// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : inputFile(other.inputFile){
  *this = other;
  return;
}

// Copy assignment overload
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
  	toConvert.clear();
	toConvert = rhs.toConvert;
	dataBase.clear();
	dataBase = rhs.dataBase; 
	data = rhs.data;
  return *this;
}

// destructor
BitcoinExchange::~BitcoinExchange() {
	toConvert.clear();
	dataBase.clear();
	 return; 
}

// functions
 void BitcoinExchange::checkDate(std::string date)const{
	std::time_t result = std::time(nullptr);
    std::tm *tm_ptr = std::localtime(&result);
    char date_str[11];
    std::strftime(date_str, sizeof(date_str), "%Y-%m-%d", tm_ptr);
	std::string today = date_str;

	if(date > today || date < "2009-01-02")
		throw(WrongDate());

    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
	
	if(month > 12 || month < 1 || day > 31 || day < 1)
		throw(WrongDate());
	
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
   		throw(WrongDate());
    }
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        if (day > 29) {
           throw(WrongDate());
        }
    } else if (month == 2) {
        if (day > 28) {
            throw(WrongDate());
        }
    }

}

void BitcoinExchange:: setDataBase(){

	std::ifstream inputFile(this->data);
	if (!inputFile.is_open())
		throw(BadFile());
	std::string line;
	std::string date;
    std::string value;
    while (std::getline(inputFile, line)) {
		std::regex pattern("^\\d{4}-\\d{2}-\\d{2},\\d+\\.?\\d*$"); // Format : YYYY-MM-DD,Nombre(double) i.e. avec un point ou sans
		if (!std::regex_match(line, pattern))
        	continue;
        std::stringstream ss(line);
		std::getline(ss, date, ',');
        std::getline(ss, value);
        this->dataBase[date] = std::stod(value); //un container map classe automatiquement les nouvelles entree en ordre croissant.
    }
	inputFile.close();
}
void BitcoinExchange:: setToConvert(){

	std::ifstream inputFile(this->inputFile);
	if (!inputFile.is_open())
		throw(BadFile());
	
	std::string line;
	std::string date;
    std::string value;
	bool isFirstLine= true;
    while (std::getline(inputFile, line)) {
		if (line.empty())
			continue;
		std::regex pattern_1("^\\d{4}-\\d{2}-\\d{2} *\\| *\\d+\\.?\\d*\\ *$");// Format : YYYY-MM-DD,Nombre(double) i.e. avec un point ou sans
		if(isFirstLine==true && !std::regex_match(line, pattern_1)){
			isFirstLine= false;
			continue;
		}
		if (!std::regex_match(line, pattern_1)){
			std::cerr << RED_CL << "Could not include this line : " << BLUE_CL << line << RED_CL << " because the format was incorect!" <<  DEFAULT_CL << std::endl;
			continue;
		}
        	//throw(BadFormat());
        std::stringstream ss(line);
		std::getline(ss, date,  '|');
    	std::getline(ss, value);
		if(std::stod(value) > 1000)
		{
			std::cerr << RED_CL << "Could not include this line : " << BLUE_CL  << line << RED_CL << " because the value is greater than 1000" << DEFAULT_CL << std::endl;
			continue;
		}
			//throw(WrongValue());
		try{
			checkDate(date);
		}
		catch(const WrongDate& e){
			std::cerr << RED_CL << "Could not include this line : " << BLUE_CL <<line << RED_CL << std::setw(30) << " because the date is invalid" << DEFAULT_CL << std::endl;
			continue;
		}
        toConvert.insert(std::make_pair(date, std::stod(value)));
		//un container map classe automatiquement les nouvelles entree en ordre croissant.
    }
	// std::multimap< std::string, double>::iterator it;
	// for (it = toConvert.begin(); it != toConvert.end(); ++it) {
    //     std::cout << it->first << ": " << it->second << std::endl;
	// }
	inputFile.close();
}
void BitcoinExchange::showMeTheMoney(){

	std::cout << "\n\n" << std::endl;
	std::cout << PINK_CL << "                   SHOW ME THE MONEY" << DEFAULT_CL << std::endl;
	std::map< std::string, double>::iterator ite;
	std::multimap< std::string, double>::iterator it;
	for (it = toConvert.begin(); it != toConvert.end(); ++it) {
		for (ite = dataBase.begin(); ite != dataBase.end(); ++ite){
			if(ite->first == it->first){
				std::cout << std::fixed << std::setprecision(6)<< "Convert bitcoin amount : " << std::setw(10) << it->second << " using conversion value of " << it->first; 
				std::cout << std::fixed << std::setprecision(2)<< "  Result : " << "\033[34m" << (ite) ->second * it ->second << "$$$" << "\033[00m" << std::endl;
				break;
			}
			else if  (ite->first > it->first){
				std::cout << std::fixed << std::setprecision(6) << "Convert bitcoin amount : " << std::setw(10) << it->second;
				std:: cout  << " using conversion value of "  <<it->first;
				std::cout << std::fixed << std::setprecision(2) << "  Result : " << "\033[34m" << (--ite) ->second * it ->second << "$$$" << "\033[00m" << std::endl;
				//std::cout << ite ->second << ite ->first << std::endl;
				break;
			}
			else if  (it->first > dataBase.rbegin()->first){
				std::cout << std::fixed << std::setprecision(6) << "Convert bitcoin amount : " << std::setw(10) << it->second << " using conversion value of " << it->first; 
				std::cout << std::fixed << std::setprecision(2) << "  Result : " << "\033[34m" << std::fixed << std::setprecision(2) << dataBase.rbegin()->second * it ->second << "$$$" << "\033[00m"<< std::endl;
				break;
			}
		}
	}
}
