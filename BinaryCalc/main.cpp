#include <iostream>
#include <string>
#include <vector>

#include "binary_calc.h"
#include "to_decimal.h"
#include "print_vector.h"

std::vector<int> parsVector(const std::string str) {
	std::vector<int> result;

	for (int i = 0; i < str.size(); ++i) {
		int j = str[i] - '0';
		result.push_back(j);
	}

	return result;
}

int main() {
	std::string input1, input2;
	std::getline(std::cin, input1);
	std::getline(std::cin, input2);

	std::vector<int> vec1 = parsVector(input1);
	std::vector<int> vec2 = parsVector(input2);
		
	int unsigned_res1 = unsignedBinaryToDecimal(vec1);
	int unsigned_res2 = unsignedBinaryToDecimal(vec2);

	int signed_res1 = signedBinaryToDecimal(vec1);
	int signed_res2 = signedBinaryToDecimal(vec2);
		
	std::cout << "----" << std::endl;
	std::cout << "unsigned: " << unsigned_res1 << " " << unsigned_res2 << std::endl;
	std::cout << "----" << std::endl;
	std::cout << "signed: " << signed_res1 << " " << signed_res2 << std::endl;

	std::vector<int> vec_print = sumUnsignedBinary(vec1, vec2);

	std::cout << "----" << std::endl;
	std::cout << "sum : " << unsigned_res1 << " + " << unsigned_res2 << " = " <<
		unsigned_res1 + unsigned_res2 << std::endl;

	std::cout << "----" << std::endl;
	std::cout << "sum : ";
	printVector(vec1);
	std::cout << " + ";
	printVector(vec2);
	std::cout << " = "; 
	printVector(vec_print);
	std::cout << std::endl;

	return 0;
}