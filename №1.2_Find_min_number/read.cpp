#include <iostream>
#include <fstream>  // для работы с файлами
#include <string>   

std::string readFile() {
	std::setlocale(LC_ALL, "Russian");
	std::ifstream file("user_input.txt");  // открываем файл
	std::string result;
	
	if (file.is_open()) {
		std::getline(file, result);
		file.close();
	}
	else {
		std::cerr << "File not open" << std::endl;
	}

	return result;
}