#ifndef SEARCHING_ALGORITHMS_SEARCHINGSTRATEGY_H
#define SEARCHING_ALGORITHMS_SEARCHINGSTRATEGY_H

class SearchingStrategy{
public:
    virtual ~SearchingStrategy() = default;
    virtual int search(const int array[], int count, int toFind) = 0;
protected:
    static int isFound(int val1, int val2);
};

class SearchingContext{
public:
    explicit SearchingContext(SearchingStrategy *searchingStrat = nullptr);
    ~SearchingContext();

    void setStrategy(SearchingStrategy *searchingStrat);
    int doSearching(int array[], int count, int toFind) const;
private:
    SearchingStrategy *searchingStrategy;
};

#endif //SEARCHING_ALGORITHMS_SEARCHINGSTRATEGY_H
