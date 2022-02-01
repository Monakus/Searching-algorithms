#ifndef SEARCHING_ALGORITHMS_INTERPOLATIONSEARCHSTRATEGY_H
#define SEARCHING_ALGORITHMS_INTERPOLATIONSEARCHSTRATEGY_H

#include "../include/searchingStrategy.h"

class InterpolationSearchStrategy : public SearchingStrategy{
public:
    int search(const int *array, int count, int toFind) override;
private:
};

#endif //SEARCHING_ALGORITHMS_INTERPOLATIONSEARCHSTRATEGY_H
