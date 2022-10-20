#include <iostream>
#include <fstream>
#include "File.h"

void app_to_file( const std::string& name, const int& val) {
	std::ofstream file("Table_of_records.txt", std::ios_base::app);
	if (!file.is_open()) {
		std::cout << "File \" Table_of_records.txt \" is not open!" << std::endl;
		exit(1);
	}
	file << name << ' ' << val << std::endl;
	file.close();
}

void print_file() {
	std::ifstream file("Table_of_records.txt", std::ios_base::app);
	if (!file.is_open()) {
		std::cout << "File \" Table_of_records.txt \" is not open!" << std::endl;
		exit(1);
	}
	std::string username;
	int att_val = 0;
	std::cout << "Table of records:" << std::endl;
	while (true) {
		file >> username;
		file >> att_val;
		file.ignore();
		if (file.fail()) {
			break;
		}
		std::cout << username << "\t" << att_val << std::endl;
		
	}
	file.close();

}
