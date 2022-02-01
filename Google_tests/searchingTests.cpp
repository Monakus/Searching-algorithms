#include "searchingTests.h"

TEST_P(SearchingSuite, trivial1){
    // given
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = 9;

    // when
    int result = context->doSearching(array, count, 5);

    // then
    EXPECT_EQ(result, 4);
}

TEST_P(SearchingSuite, trivial2){
    // given
    int array[] = {1, 5, 10, 23, 48, 50, 57, 64, 89};
    int count = 9;

    // when
    int result = context->doSearching(array, count, 57);

    // then
    EXPECT_EQ(result, 6);
}

TEST_P(SearchingSuite, findFirstValue){
    // given
    int array[] = {1, 5, 10, 23, 48, 50, 57, 64, 89};
    int count = 9;

    // when
    int result = context->doSearching(array, count, 1);

    // then
    EXPECT_EQ(result, 0);
}

TEST_P(SearchingSuite, findLastValue){
    // given
    int array[] = {1, 5, 10, 23, 48, 50, 57, 64, 89};
    int count = 9;

    // when
    int result = context->doSearching(array, count, 89);

    // then
    EXPECT_EQ(result, 8);
}