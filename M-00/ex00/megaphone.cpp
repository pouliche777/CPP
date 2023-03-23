#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 0;
	while (--argc)
	{
		i++;
		std::string tempo = argv[i];
		for(unsigned int i=0; i< tempo.size();i++)
			tempo[i] = std::toupper(tempo[i]);
		std::cout << tempo;
	}
	std::cout << std::endl;
}