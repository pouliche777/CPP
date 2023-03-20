/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:44:53 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:44:54 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include <fstream>


int main (int argc, char **argv)
{
	if (argc != 4){
		std::cerr<<"wrong arugments! "<< std::endl;
			exit (EXIT_FAILURE);
	}
	
	std::ifstream inputFile(argv[1]);
	std::string to_replace = argv[2];
	std::string new_string = argv[3];
	
	if (!inputFile.is_open())
	{
		std::cerr << "Could not open " << std::string(argv[1]) << " ! " << std::endl;
		exit (EXIT_FAILURE);
	}
	std::ofstream outFile(std::string(argv[1]) + ".replace");
	std::string tempo;
	if (outFile.is_open())
	{
		while (std::getline(inputFile, tempo))
		{
			int pos = 0;
			while( (pos = tempo.find(to_replace))!= -1)
			{
				tempo.erase(pos, to_replace.size());
				tempo.insert(pos, new_string);

			}
			outFile << tempo << std::endl;
		}
	}
	outFile.close();
	inputFile.close();
	return 0;
}