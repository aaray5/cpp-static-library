#include <iostream>
#include "include/ArrayUtils.h"
#include "include/ValidationUtils.h"

int main() {
    constexpr std::size_t ARRAY_SIZE = 5;
    int sampleData[ARRAY_SIZE] = {12, 45, 67, 23, 89};

    std::cout << "=== Testing Modular C++ Library ===\n";
    
    std::cout << "Array Contents: ";
    CoreUtils::PrintArray(sampleData, ARRAY_SIZE);

    double avg = CoreUtils::CalculateAverage(sampleData, ARRAY_SIZE);
    std::cout << "Calculated Average: " << avg << "\n";

    int testValue = 45;
    if (CoreUtils::IsWithinRange(testValue, 10, 50)) {
        std::cout << "Value " << testValue << " is valid and within [10, 50].\n";
    }

    return 0;
}
