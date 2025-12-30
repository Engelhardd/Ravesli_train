#include "to_decimal.h"

int unsignedBinaryToDecimal(const std::vector<int> vec) {
	int result = 0;
	std::vector<int> tmp_vec{};
	int digit_of_the_number{};

	for (int i = 1; i < vec.size(); ++i) {
		digit_of_the_number = std::pow(2, vec.size() - i);
		tmp_vec.push_back(digit_of_the_number);
	}

	tmp_vec.push_back(1);

	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] == 1) {
			result += tmp_vec[i];
		}
	}

	return result;
}

int signedBinaryToDecimal(const std::vector<int> vec) {
	std::vector<int> tmp_vec{};

	for (int i = 1; i < vec.size(); ++i) {
		if (vec[i] == 0) {
			tmp_vec.push_back(1);
		}
		else {
			tmp_vec.push_back(0);
		}
	}

	tmp_vec = sumUnsignedBinary(tmp_vec, {0, 0, 0, 1} );

	int resulte = unsignedBinaryToDecimal(tmp_vec) * -1;

	return resulte;
}