#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "foo.h"
 

int main(int argc, char* argv[]) {

	int max = 0,att=0;
	//Обработка вводных параметров
	if (argc == 1) {
		std::cout << argv[0] << std::endl;
		max = 50;
		std::cout << "Guess the number from 1 to 50" << std::endl;
	}
	else  {
		std::string param = argv[1];
		if (param == "-max") {
			if (argc < 3) {
				std::cout << "The argument \"-max\" must have a value" << std::endl;
				return -1;
			}
			max = std::stoi(argv[2]);
			std::cout << "Guess the number from 1 to "<<max << std::endl;
		}
		if (param == "-table") {
			print_file();
			return 0;
		}
	}
	std::string name;
	std::cout << "Enter your name: ";
	getline(std::cin, name);
	std::srand((unsigned int)std::time(nullptr));
	const int targ_val = std::rand()%max;

	game(targ_val, att);
	app_to_file( name, att);
	print_file( );
	


	return 0;
}