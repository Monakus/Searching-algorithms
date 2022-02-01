#include "../include/linearSearchStrategy.h"

int LinearSearchStrategy::search(const int array[], int count, int toFind) {
    for (int i = 0; i < count; ++i) {
        if(isFound(array[i], toFind))
            return i;
    }
    return -1;
}