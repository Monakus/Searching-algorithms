#include "../include/interpolationSearchStrategy.h"

// TO DO: Refactor
int InterpolationSearchStrategy::search(const int *array, int count, int toFind) {
    int leftBoundary = 0;
    int rightBoundary = count - 1;
    while(leftBoundary <= rightBoundary && toFind >= array[leftBoundary] && toFind <= array[rightBoundary]){
        if(leftBoundary == rightBoundary){
            if(isFound(array[leftBoundary], toFind))
                return leftBoundary;
            return -1;
        }
        int index = leftBoundary + (((double)(rightBoundary - leftBoundary) / (array[rightBoundary] - array[leftBoundary])) * (toFind - array[leftBoundary]));

        if(isFound(array[index], toFind))
            return index;
        if(array[index] < toFind)
            leftBoundary = index + 1;
        else
            rightBoundary = index - 1;
    }
    return -1;
}
