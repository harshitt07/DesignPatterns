#include "iostream"

#include "./../basepizza/BasePizza.h"

using namespace std;

#ifndef VEG_DELIGHT_H
#define VEG_DELIGHT_H

class VegDelight : public BasePizza {

    public:
    int cost() {
        cout << "Adding the cost for VegDelight!\n";
        return 100;
    }

};

#endif