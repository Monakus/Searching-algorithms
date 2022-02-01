#include "../include/searchingStrategy.h"
#include "../include/linearSearchStrategy.h"
#include "../include/jumpSearchStrategy.h"
#include "../include/interpolationSearchStrategy.h"

#include <iostream>

int main() {
    auto *context = new SearchingContext(new LinearSearchStrategy);
    int array[] = {1, 5, 10, 23, 48, 50, 57, 64, 89};
    std::cout << context->doSearching(array, 9, 57) << std::endl;

    context->setStrategy(new JumpSearchStrategy);
    std::cout << context->doSearching(array, 9, 57) << std::endl;

    context->setStrategy(new InterpolationSearchStrategy);
    std::cout << context->doSearching(array, 9, 57) << std::endl;
    return 0;
}
