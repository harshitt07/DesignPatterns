#include "iostream"

#include "./../basepizza/BasePizza.h"

using namespace std;

#ifndef FARM_HOUSE_H
#define FARM_HOUSE_H

class FarmHouse : public BasePizza {

    public:
    int cost() {
        cout << "Adding the cost for Farmhouse!\n";
        return 200;
    }

};

#endif