#include <iostream>
#include "Game.h"

void game(const int& targ, int& att) {
	int cur_val = 0;
	do {
		std::cout << "Enter your guess: ";
		std::cin >> cur_val;
		if (cur_val < targ) {
			std::cout << "less than " << cur_val << std::endl;
			att++;
		}
		else if (cur_val > targ) {
			std::cout << "greater than " << cur_val << std::endl;
			att++;
		}
		else {
			std::cout << "You win!!! Attempts = " << att << std::endl;
			break;
		}
	} while (true);
}