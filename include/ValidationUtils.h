#ifndef VALIDATION_UTILS_H
#define VALIDATION_UTILS_H

namespace CoreUtils {
    // Verifies if the provided input falls strictly within specified boundaries
    bool IsWithinRange(int value, int min, int max);

    // Clears error flags and flushes invalid stream input safely
    void ClearInputBuffer();
}

#endif // VALIDATION_UTILS_H
