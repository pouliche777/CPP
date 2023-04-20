#include <iostream>
#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main()
{
	Array< int > intArray( 12 );
	Array< std::string > stringArray( 6 );
	Array< double > doubleArray( 6 );

	for (unsigned int i=0; i< intArray.size(); i++){
		if( i % 2 ==0)
			intArray[i] = 2;
		else	
			intArray[i] = 4;

	}
	for (unsigned int i=0; i< doubleArray.size(); i++){
		if( i % 2 ==0)
			doubleArray[i] = 2.4;
		else	
			doubleArray[i] = 4.2;

	}
	for (unsigned int i=0; i< stringArray.size(); i++){
		if( i % 2 ==0)
			stringArray[i] = "poulet";
		else	
			stringArray[i] = "cochon";

	}
	for (unsigned int i=0; i< stringArray.size(); i++){
		std::cout <<  stringArray[i] << std::endl;
	}
	
	for (unsigned int i=0; i< intArray.size(); i++){
		std::cout <<  intArray[i] << std::endl;
	}
	for (unsigned int i=0; i< doubleArray.size(); i++){
		std::cout <<  doubleArray[i] << std::endl;
	}
	
	return 0;
}