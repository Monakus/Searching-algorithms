#include "../include/interpolationSearchStrategy.h"

int InterpolationSearchStrategy::search(const int *array, int count, int toFind) {
    leftBoundary = 0;
    rightBoundary = count - 1;
    while(checkIfInBoundaries(array, toFind)){
        if(leftBoundary == rightBoundary)
            return checkIfValueExists(array, toFind);

        int index = calculateIndex(array, toFind);

        if(isFound(array[index], toFind))
            return index;

        updateBoundaries(array[index], index, toFind);
    }
    return -1;
}

bool InterpolationSearchStrategy::checkIfInBoundaries(const int array[], int toFind) {
    return (leftBoundary <= rightBoundary && toFind >= array[leftBoundary] && toFind <= array[rightBoundary]);
}

int InterpolationSearchStrategy::checkIfValueExists(const int array[], int toFind) {
    if(isFound(array[leftBoundary], toFind))
        return leftBoundary;
    return -1;
}

int InterpolationSearchStrategy::calculateIndex(const int array[], int toFind) {
    return int(leftBoundary + (((double)(rightBoundary - leftBoundary) / (array[rightBoundary] - array[leftBoundary])) * (toFind - array[leftBoundary])));
}

void InterpolationSearchStrategy::updateBoundaries(int valueAtCurrentIndex, int index, int toFind) {
    if(valueAtCurrentIndex < toFind)
        leftBoundary = index + 1;
    else
        rightBoundary = index - 1;
}
