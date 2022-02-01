#include "../include/searchingStrategy.h"

SearchingContext::SearchingContext(SearchingStrategy *searchingStrat) : searchingStrategy(searchingStrat) {}

SearchingContext::~SearchingContext() {
    delete this->searchingStrategy;
}

void SearchingContext::setStrategy(SearchingStrategy *searchingStrat) {
    delete this->searchingStrategy;
    this->searchingStrategy = searchingStrat;
}

int SearchingContext::doSearching(int *array, int count, int toFind) const {
    return this->searchingStrategy->search(array, count, toFind);
}
int SearchingStrategy::isFound(int val1, int val2) {
    if (val1 == val2)
        return 1;
    return 0;
}