#include "iostream"

#include "./ToppingDecorator.h"

using namespace std;

#ifndef EXTRA_CHEESE_H
#define EXTRA_CHEESE_H

class ExtraCheese : public ToppingDecorator {

    BasePizza* basePizza;

    public:
    ExtraCheese(BasePizza* _basePizza) {
        basePizza = _basePizza;
    }

    int cost() {
        cout << "Adding the cost for ExtraCheese!\n";
        return basePizza->cost() + 20;
    }

};

#endif