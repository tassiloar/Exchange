#ifndef EXCHANGE_H
#define EXCHANGE_H

using namespace std;
#include <string>
#include <vector>
#include "Asset.h"

class Exchange
{
public:
    Exchange(string name);
    string getname();

    int addAsset(string name);
    Asset *getAsset(int id);
    vector<Asset> getAssets();

private:
    string name;
    vector<Asset> AssetList;
};

#endif