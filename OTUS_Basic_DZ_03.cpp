#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "foo.h"
 

int main(int argc, char* argv[]) {

	int lvl = 0,val =0, att = 0;
	std::string name;

	std::cout << "Enter your name: ";
	getline(std::cin, name);
	std::cout << "Enter the level from 1 to 3: ";
	//Проверка введеного символа. Ввод продолжается пока введеное число за пределами от 1 до 3. И введеный символ не число.
	for (;;) {
		std::cin >> lvl;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "It's not a number. Try again" << std::endl;
		}
		else if (lvl <= 0 || lvl > 3) {
			std::cout << "Incorrect value entered. Try again" << std::endl;
		}
		else {
			break;
		}
	}

	// Определение зачения зааданного числа в зависимости от уровня сложности
	switch (lvl)
	{
	case(1): {
		val =  10;
		std::cout << "guess the number - level " << lvl << std::endl;
		break;
	}
	case(2): {
		val =  50;
		std::cout << "guess the number - level " << lvl << std::endl;
		break;
	}
	case(3): {
		val = 100;
		std::cout << "guess the number - level " << lvl << std::endl;
		break;
	}
	}

	std::srand(std::time(nullptr));
	const int targ_val = std::rand()%val;

	game(targ_val, att);
	app_to_file(name, att);
	print_file();
	


	return 0;
}