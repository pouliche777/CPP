#include <iostream>
#include <limits>
#include <string>
#include <cctype>


//ecrire une programme qui convertie un string en un autre type de variable!. premiere etape sera de
// verifier de trouver quel type de variable il sagit. ensuite faire la nouvelle variable!
bool onlyDigits(std::string toConvert){
	int i =0;
	if (toConvert[i] == '-')
	i++;
	while(toConvert[i])
	{
		if(!std::isdigit(toConvert[i] || toConvert[i] == '-'))
			return (false);
		i++;
	}
	return true;
}
void printConvertChar(char c){
	std::cout<< "char :  " << c << std::endl;
	std::cout<< "int :  " << static_cast<int>(c) << std::endl;
	std::cout<< "double :  " << static_cast<double>(c) << ".0" <<std::endl;
	std::cout<< "float :  " << static_cast<float>(c) << ".0f" << std::endl;
}
void printConvertInt(int c){
	std::cout<< "char :  " << static_cast<char>(c) << std::endl;
	std::cout<< "int :  " << c << std::endl;
	std::cout<< "double :  " << static_cast<double>(c) << ".0" <<std::endl;
	std::cout<< "float :  " << static_cast<float>(c) << ".0f" << std::endl;
}
void printConvertDouble(double c){
	std::cout<< "char :  " << static_cast<char>(c) <<std::endl;
	std::cout<< "int :  " << static_cast<int>(c) << std::endl;
	std::cout<< "double :  " << c << std::endl;
	std::cout<< "float :  " << static_cast<float>(c) << ".0f" << std::endl;
	//mettre des conditions pour gerer l<impression avec float et double
}
void printConvertFloat(float c){
	std::cout<< "char :  " << static_cast<char>(c) << std::endl;
	std::cout<< "int :  " << static_cast<int>(c)  << std::endl;
	std::cout<< "double :  " << static_cast<double>(c) << ".0" <<std::endl;
	std::cout<< "float :  " << c << "f" << std::endl;
	//mettre des conditions pour gerer l<impression avec float et double
}

std::string checkType(std::string toConvert){
	if (toConvert.find('f') != std::string::npos)
		return ("float");
	else (toConvert.find('.') != std::string::npos)
		return ("float");

	if (toConvert.size() == 1)
		return "char";
	else if (onlyDigits(toConvert))
		return "int";
	
}

int main(int argc, char **argv){

	if (argc !=2){
		std::cerr<<"Wrong arugments! The program takes only one arg! "<< std::endl;
		exit (EXIT_FAILURE);
	}

	std::string type;
	std::string toConvert = argv[1];
	type = checkType(toConvert);

	if (type == "char"){
		printConvertChar(toConvert[0]);
	}
	else if (type == "float"){
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
		i = std::stoi(toConvert);
		printConvertInt(i);

	}
	return 0;
}
