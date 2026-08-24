#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <cstddef>

namespace CoreUtils {
    // Calculates average of dynamic or static integer array safely
    double CalculateAverage(const int* arr, std::size_t size);

    // Prints array elements formatted sequentially
    void PrintArray(const int* arr, std::size_t size);
}

#endif // ARRAY_UTILS_H
