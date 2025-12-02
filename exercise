#include <iostream>

// Функция для сравнения двух строк
bool campareStr(std::string str1, std::string str2) {
	if (str1 == str2) {
		return true;
	}

	return false;
}

// Функция проверки на предложения на наличие только одного char
bool findCharOne(std::string str) {
	for (int i = 0; i < str.size(); i++) {
		for (int j = 1; j < str.size(); j++) {
			if (str[i] != str[j]) {
				return true;
			}
		}
	}

	return false;
}

// Функция принимает строку и парсит. В итоге получает две строки,
// которые мы будем сравнивать
bool result(std::string str) {
	std::string str1 = str;
	std::string str2 = str;	

	if (!(str.size() % 2) || str.size() <= 2) {
		return false;
	}

	if (!findCharOne(str)) {
		return false;
	}

	str1 = str1.erase((str1.size() / 2), str1.size() - str1.size() / 2);
	str2 = str2.erase(0, (str2.size() / 2) + 1);
	
	return campareStr(str1, str2);
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::string str = " ";
	std::cout << "Введите предложение:" << std::endl;
	std::cin >> str;

	if (result(str)) {
		std::cout << "true" << std::endl;
	}
	else {
		std::cout << "false" << std::endl;
	}
	
	return 0;
}
