#include "iostream"

#include "./ToppingDecorator.h"

using namespace std;

#ifndef MUSHROOM_H
#define MUSHROOM_H

class Mushroom : public ToppingDecorator {

    BasePizza* basePizza;

    public:
    Mushroom(BasePizza* _basePizza) {
        basePizza = _basePizza;
    }

    int cost() {
        cout << "Adding the cost for Mushrooms!\n";
        return basePizza->cost() + 10;
    }

};

#endif