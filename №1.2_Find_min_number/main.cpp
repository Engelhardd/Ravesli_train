#include <iostream>
#include <string>
#include <algorithm>

#include "read.h"
#include "print.h"
#include "pars_txt.h"

int main() {
	std::string number_user;
	std::vector<int> vector_number;
	int result;
	
	// записываем, что ввел пользователь
	number_user = readFile();

	if (number_user != "Error") {
		// выводим, что введ пользователь
		printFile(number_user);

		// создаем вектор из введенных пользователем числе
		vector_number = inputVector(number_user);

		// печатаем вектор
		printVector(vector_number);

		// Поиск минимального числа
		auto it = std::min_element(vector_number.begin(), vector_number.end());
		result = *it;

		// Вывод результата
		std::cout << "\nNumber Min =  ";
		std::cout << result << std::endl;
	}
	else {
		std::cout << "Error";
	}
}