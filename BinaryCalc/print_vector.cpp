#include "print_vector.h"

void printVector(const std::vector<int>& vec) {
	for (auto& it : vec) {
		std::cout << it;
	}
}