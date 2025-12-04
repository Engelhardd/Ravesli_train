#include <iostream>
#include <fstream>  // הכÿ נאבמעû ס פאיכאלט
#include <string>   

std::string readFile() {
	std::string result;
	
	std::ifstream file("user_input.txt");
	if (file.is_open()) {
		
		while (std::getline(file, result, ' ')) {
			int i = std::stoi(result);
			if (i < 0) {
				std::cerr << "Number is negativ!" << std::endl;
				
				return "Error";
			}
		}

		file.clear();
		file.seekg(0);
		std::getline(file, result);
		file.close();
	}
	else {
		std::cerr << "File not open" << std::endl;
		
		return "Error";
	}

	return result;
}