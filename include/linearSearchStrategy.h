#ifndef SEARCHING_ALGORITHMS_LINEARSEARCHSTRATEGY_H
#define SEARCHING_ALGORITHMS_LINEARSEARCHSTRATEGY_H

#include "searchingStrategy.h"

class LinearSearchStrategy : public SearchingStrategy{
public:
    int search(const int array[], int count, int toFind) override;
};

#endif //SEARCHING_ALGORITHMS_LINEARSEARCHSTRATEGY_H
