#include <string>
#include <sstream> 
#include <vector>

std::vector<int> inputVector(std::string str) {
	std::vector <int> result;
	std::stringstream ss(str);
	int num;

	while (ss >> num) {
		result.push_back(num);
	}

	return result;
}