#include "../include/ArrayUtils.h"
#include <iostream>

namespace CoreUtils {
    double CalculateAverage(const int* arr, std::size_t size) {
        if (arr == nullptr || size == 0) {
            return 0.0;
        }

        long long sum = 0;
        for (std::size_t i = 0; i < size; ++i) {
            sum += arr[i];
        }

        return static_cast<double>(sum) / size;
    }

    void PrintArray(const int* arr, std::size_t size) {
        if (arr == nullptr || size == 0) {
            std::cout << "[]\n";
            return;
        }

        std::cout << "[ ";
        for (std::size_t i = 0; i < size; ++i) {
            std::cout << arr[i] << (i + 1 < size ? ", " : " ");
        }
        std::cout << "]\n";
    }
}
