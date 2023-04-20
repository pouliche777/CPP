#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <sstream>


//ecrire une programme qui convertie un string en un autre type de variable!. premiere etape sera de
// verifier de trouver quel type de variable il sagit. ensuite faire la nouvelle variable!
bool onlyDigits(std::string toConvert){
	int i =0;
	if (toConvert[i] == '-')
		i++;
	while(toConvert[i])
	{
		if(!std::isdigit(toConvert[i]))
			return (false);
		i++;
	}
	return true;
}
void	printNan() {
	std::cout << "char :   IMPOSSIBLE" << std::endl;
	std::cout << "int :   IMPOSSIBLE" << std::endl;
	std::cout << "float :  nanf" << std::endl;
	std::cout << "double :   nan" << std::endl;
}

void	printInf() {
	std::cout << "char :   IMPOSSIBLE" << std::endl;
	std::cout << "int :   IMPOSSIBLE" << std::endl;
	std::cout << "float :   inff" << std::endl;
	std::cout << "double :   inf"  << std::endl;
}
void	printMinusInf() {
	std::cout << "char :   IMPOSSIBLE" << std::endl;
	std::cout << "int :   IMPOSSIBLE" << std::endl;
	std::cout << "float :   -inff" << std::endl;
	std::cout << "double :   -inf"  << std::endl;
}


void printConvertChar(char c){
	std::cout<< "char :  " << c << std::endl;
	std::cout<< "int :  " << static_cast<int>(c) << std::endl;
	std::cout<< "double :  " << static_cast<double>(c) << ".0" <<std::endl;
	std::cout<< "float :  " << static_cast<float>(c) << ".0f" << std::endl;
}
void printConvertInt(int c){
	if( std::isprint(static_cast<char>(c)))
		std::cout<< "char :  " << static_cast<char>(c) << std::endl;
	else{
		if ((c >= 0 && c <= 127) && (fmod(c, 1) == 0)) {
			std::cout << "char :   NON DISPLAYABLE" << std::endl;
		}
		else
			std::cout<< "char :  " << "IMPOSSIBLE" << std::endl;
	}
		
	std::cout<< "int :  " << c << std::endl;
	std::cout<< "double :  " << static_cast<double>(c) << ".0" <<std::endl;
	std::cout<< "float :  " << static_cast<float>(c) << ".0f" << std::endl;
}
void printConvertDouble(double c){
	if(fmod(c, 1) == 0 && std::isprint(static_cast<char>(c)))
		std::cout<< "char :  " << static_cast<char>(c) <<std::endl;
	else{
		if ((c >= 0 && c <= 127) && (fmod(c, 1) == 0))  {
			std::cout << "char :   NON DISPLAYABLE" << std::endl;
		}
		else
			std::cout<< "char :  " << "IMPOSSIBLE" << std::endl;
	}

	if (c >= std::numeric_limits<int>::min() && c <= std::numeric_limits<int>::max()) {
		std::cout << "int :  " << static_cast<int>(c) << std::endl;
	}
	else 
		std::cout<< "int :  " << "IMPOSSIBLE" << std::endl;
	if (fmod(c, 1) == 0)	
		std::cout<< "double :  " << c <<  ".0" << std::endl;
	else
		std::cout<< "double :  " << c  << std::endl;
	if (fmod(c, 1) == 0)
		std::cout<< "float :  " << static_cast<float>(c) << ".0f" << std::endl;
	else
		std::cout<< "float :  " << static_cast<float>(c) << "f" << std::endl;

}
void printConvertFloat(float c){
	if(fmod(c, 1) == 0 && std::isprint(static_cast<char>(c)))
		std::cout<< "char :  " << static_cast<char>(c) << std::endl;
	else{
		if ((c >= 0 && c <= 127) && (fmod(c, 1) == 0))   {
			std::cout << "char :   NON DISPLAYABLE" << std::endl;
		}
		else
			std::cout<< "char :  " << "IMPOSSIBLE" << std::endl;
	}

	if (c >= std::numeric_limits<int>::min() && c <= std::numeric_limits<int>::max()) {
		std::cout << "int :  " << static_cast<int>(c) << std::endl;
	}
	else 
		std::cout<< "int :  " << "IMPOSSIBLE" << std::endl;

	if(fmod(c, 1) == 0)
		std::cout<< "double :  " << static_cast<double>(c) << ".0" << std::endl;
	else
		std::cout<< "double :  " << static_cast<double>(c) << std::endl;
	std::cout<< "float :  " << c << "f" << std::endl;
	//mettre des conditions pour gerer l<impression avec float et double
}

std::string checkType(std::string toConvert, std::string type){
	if (type == "float")
		return "float";
	else if (toConvert.size() == 1  && onlyDigits(toConvert) == false)
		return "char";
	else if(toConvert.find('.') != std::string::npos)
		return ("double");
	else
		return "int";
}

int main(int argc, char **argv){

	if (argc !=2){
		std::cerr<<"Wrong arugments! The program takes only one arg! "<< std::endl;
		exit (EXIT_FAILURE);
	}

	std::string type;
	std::string toConvert = argv[1];

	if (toConvert == "nan" || toConvert == "nanf") {
		printNan(); 
		return 0;
	}
	else if (toConvert == "inf" || toConvert == "inff") {
		printInf(); 
		return 0;
	}
	else if (toConvert == "-inf" || toConvert == "-inff")
	{
		printMinusInf(); 
		return 0;
	}



	double value;
	if (toConvert.back() == 'f' && toConvert.size() != 1){
		toConvert.pop_back();
		type = "float";
	}
	type = checkType(toConvert, type);
	if (type == "char"){
			printConvertChar(toConvert[0]);
			return (0);
		}
    std::istringstream StringtoCheck(toConvert);
    StringtoCheck >> value;
		
	if (StringtoCheck.fail() || !StringtoCheck.eof()){
		std::cerr  << "The argument is not a litteral" << std ::endl;
		exit(EXIT_FAILURE);
	}

	try{
		if (type == "float"){
			float i; 
			i = std::stof(toConvert);
			printConvertFloat(i);
		}
		else if (type == "double"){
			double i; 
			i = std::stod(toConvert);
			printConvertDouble(i);
		}
		else if (type == "int"){
			int i; 
			try{
			i = std::stoi(toConvert);
			}
			catch(const std::exception& e){
				double j = std::stod(toConvert);
				printConvertDouble(j);
				return 0;
			}
			printConvertInt(i);
		}
	}
	catch(const std::exception& e){
		std::cerr  << "The argument is not a litteral" << std ::endl;
	}
	return 0;
}
