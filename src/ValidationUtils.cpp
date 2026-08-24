#include "../include/ValidationUtils.h"
#include <iostream>
#include <limits>

namespace CoreUtils {
    bool IsWithinRange(int value, int min, int max) {
        return (value >= min && value <= max);
    }

    void ClearInputBuffer() {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
