#ifndef SEARCHING_ALGORITHMS_SEARCHINGTESTS_H
#define SEARCHING_ALGORITHMS_SEARCHINGTESTS_H

#include "gtest/gtest.h"
#include "../include/searchingStrategy.h"
#include "../include/linearSearchStrategy.h"
#include "../include/jumpSearchStrategy.h"
#include "../include/interpolationSearchStrategy.h"

class SearchingSuite : public ::testing::TestWithParam<SearchingStrategy*>{
public:
    void SetUp() override{
        strategy = GetParam();
        context = new SearchingContext(strategy);
    }

    void TearDown() override{
        delete context;
    }

protected:
    SearchingContext *context{};
    SearchingStrategy *strategy;
};

INSTANTIATE_TEST_SUITE_P(SearchingTests, SearchingSuite, testing::Values(new LinearSearchStrategy, new JumpSearchStrategy, new InterpolationSearchStrategy));

#endif //SEARCHING_ALGORITHMS_SEARCHINGTESTS_H
