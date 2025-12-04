#include <iostream>
#include<string>
#include<vector>

void printFile(std::string str) {
	std::cout << str << std::endl;
}

void printVector(std::vector<int> vec) {
	for (auto& it : vec) {
		std::cout << it << std::endl;
	}
}