#ifndef LIMITORDERBOOK_H
#define LIMITORDERBOOK_H

using namespace std;
#include <string>
#include <vector>

class LimitOrderBook
{
public:
    LimitOrderBook();

    int getId();

    /*Data*/
    int *getBids();
    int *getAsks();

    /*Orders*/
    int bidMarket(float price, int qty);
    int askMarket(float price, int qty);
    int bidLimit(float price, int qty);
    int askLimit(float price, int qty);

private:
    int id;

    struct order
    {
        int id;
        int qty;
    };

    struct priceLevel
    {
        int price;
        vector<order> *orders;
    };
    vector<priceLevel> *bids;
    vector<priceLevel> *asks;
};

#endif