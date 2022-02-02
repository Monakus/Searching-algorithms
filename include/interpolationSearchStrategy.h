#ifndef SEARCHING_ALGORITHMS_INTERPOLATIONSEARCHSTRATEGY_H
#define SEARCHING_ALGORITHMS_INTERPOLATIONSEARCHSTRATEGY_H

#include "../include/searchingStrategy.h"

class InterpolationSearchStrategy : public SearchingStrategy{
public:
    int search(const int array[], int count, int toFind) override;
private:
    int leftBoundary;
    int rightBoundary;
    bool checkIfInBoundaries(const int array[], int toFind);
    int checkIfValueExists(const int array[], int toFind);
    int calculateIndex(const int array[], int toFind);
    void updateBoundaries(int valueAtCurrentIndex, int index, int toFind);
};

#endif //SEARCHING_ALGORITHMS_INTERPOLATIONSEARCHSTRATEGY_H
