#include "../include/jumpSearchStrategy.h"
#include <complex>
#include <iostream>

int JumpSearchStrategy::search(const int *array, int count, int toFind) {
    if(isFound(array[0], toFind))
        return 0;
    int step = (int)std::sqrt(count);
    int correctBlockStart = findCorrectBlockStart(array, count, toFind, step);
    int res = searchInBlock(array, correctBlockStart, correctBlockStart + step, toFind);
    return res;
}

int JumpSearchStrategy::findCorrectBlockStart(const int array[], int count, int toFind, int step) {
    for (int i = 0; i < count - 1; i += step) {
        if(isGraterThanOrEqual(array[i], toFind))
            return i - step;
        }
    return count - step;
}

int JumpSearchStrategy::isGraterThanOrEqual(int val1, int val2) {
    if(val1 >= val2)
        return 1;
    return 0;
}

int JumpSearchStrategy::searchInBlock(const int array[], int start, int end, int toFind) {
    for (int i = start; i <= end; ++i) {
        if(isFound(array[i], toFind))
            return i;
    }
    return -1;
}