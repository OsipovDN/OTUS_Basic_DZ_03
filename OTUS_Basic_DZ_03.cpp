#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "File.h"
#include "Game.h"
 

int main(int argc, char* argv[]) {

	std::srand(std::time(nullptr));
	int val =0, att = 0;
	std::string name;

	if (argc == 1) {
		std::cout << argv[0] << std::endl;
		const int targ_val = std::rand() % 50;
		std::cout << "Guess the number from 1 to 50" << std::endl;
	}
	else {
		std::string param = argv[1];
		if (param == "-level") {
			if (argc < 3) {
				std::cout << "The argument \"-level\" must have a value" << std::endl;
				return -1;
			}
			// Определение зачения заданного числа в зависимости от уровня сложности
			switch ((int)argv[2])
			{
			case(1): {
				val = 10;
				std::cout << "guess the number - level " << argv[2] << std::endl;
				break;
			}
			case(2): {
				val = 50;
				std::cout << "guess the number - level " << argv[2] << std::endl;
				break;
			}
			case(3): {
				val = 100;
				std::cout << "guess the number - level " << argv[2] << std::endl;
				break;
			}
			}
			
			std::cout << "Guess the number from 1 to " << val << std::endl;
		}
		if (param == "-table") {
			print_file();
			return 0;
		}
	}
	const int targ_val = std::rand() % val;
	std::cout << targ_val << std::endl;
	std::cout << "Enter your name: ";
	getline(std::cin, name);
	game(targ_val, att);
	app_to_file(name, att);
	print_file();
	


	return 0;
}