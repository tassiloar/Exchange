#ifndef ASSET_H
#define ASSET_H

using namespace std;
#include <string>
#include "LimitOrderBook.h"

class Asset
{
public:
    Asset(string name);
    int getId();
    string getName();
    string setName();
    string getVolume();
    LimitOrderBook *getLOB();

private:
    int id;
    string name;
    string volume;
    LimitOrderBook *LOB;
};

#endif