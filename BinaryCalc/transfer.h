#pragma once

#include <vector>
#include <cmath>

#include "binary_calc.h"

int unsignedBinaryToDecimal(const std::vector<int> vec);
int signedBinaryToDecimal(const std::vector<int> vec); // "-"
std::vector<int> unsignedDecimalToBinary(int& num);