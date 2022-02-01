#ifndef SEARCHING_ALGORITHMS_JUMPSEARCHSTRATEGY_H
#define SEARCHING_ALGORITHMS_JUMPSEARCHSTRATEGY_H

#include "../include/searchingStrategy.h"

class JumpSearchStrategy : public SearchingStrategy{
public:
    int search(const int array[], int count, int toFind) override;
private:
    static int isGraterThanOrEqual(int val1, int val2);
    int findCorrectBlockStart(const int array[], int count, int toFind, int step);
    int searchInBlock(const int array[], int start, int end, int toFind);
};

#endif //SEARCHING_ALGORITHMS_JUMPSEARCHSTRATEGY_H
