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

    // Read user input from file
    number_user = readFile();

    if (number_user != "Error") {
        // Display user input
        printFile(number_user);

        // Create vector from user input numbers
        vector_number = inputVector(number_user);

        // Print the vector
        printVector(vector_number);

        // Find minimum number
        auto it = std::min_element(vector_number.begin(), vector_number.end());
        result = *it;

        // Output result
        std::cout << "\nMinimum Number = ";
        std::cout << result << std::endl;
    }
    else {
        std::cout << "Error";
    }
}