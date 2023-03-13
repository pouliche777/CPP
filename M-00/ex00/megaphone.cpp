#include <iostream>
#include <cstring>

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
		for (size_t x=0; x<strlen(argv[i]); x++)
			argv[i][x] = toupper(argv[i][x]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
}