#include "binary_calc.h"

std::vector<int> sumUnsignedBinary(std::vector<int> vec1, std::vector<int> vec2) {
	std::vector<int> resulte_tmp;
	std::vector<int> resulte;

	bool tmp = false;

	if (vec1.size() < vec2.size()) {
		size_t tmp = vec2.size() - vec1.size();
		for (int i = 0; i < tmp; ++i) {
			vec1.insert(vec1.begin(), 0);
		}
	}
	else if (vec1.size() > vec2.size()) {
		size_t tmp = vec1.size() - vec2.size();
		for (int i = 0; i < tmp; ++i) {
			vec2.insert(vec2.begin(), 0);
		}
	}

	for (int i = vec1.size() - 1; i >= 0; --i) {
		if (i == 0) {
			if ((vec1[i] + vec2[i]) > 1 && !tmp) {
				resulte_tmp.push_back(0);
				resulte_tmp.push_back(1);
			}
			else if ((vec1[i] + vec2[i]) > 1 && tmp) {
				resulte_tmp.push_back(1);
				resulte_tmp.push_back(1);
			}
			else {
				if (tmp) {
					resulte_tmp.push_back(((vec1[i] + vec2[i]) == 1) ? 0 : 1);
					resulte_tmp.push_back(1);
				}
				else {
					resulte_tmp.push_back(vec1[i] + vec2[i]);
				}
			}
		}
		else if (vec1[i] + vec2[i] > 1) {
			if (tmp) {
				resulte_tmp.push_back(1);
				tmp = true;
			}
			else {
				resulte_tmp.push_back(0);
				tmp = true;
			}
		}
		else {
			if (tmp) {
				resulte_tmp.push_back(((vec1[i] + vec2[i]) == 1) ? 0 : 1);
				if ((vec1[i] + vec2[i]) == 0) {
					tmp = false;
				}
			}
			else {
				resulte_tmp.push_back(vec1[i] + vec2[i]);
			}
		}
	}

	for (int i = resulte_tmp.size() - 1; i >= 0; --i) {
		resulte.push_back(resulte_tmp[i]);
	}

	return resulte;
}