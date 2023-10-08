#include "iostream"

#include "./ToppingDecorator.h"

using namespace std;

#ifndef JALAPENO_H
#define JALAPENO_H

class Jalpeno : public ToppingDecorator {

    BasePizza* basePizza;

    public:
    Jalpeno(BasePizza* _basePizza) {
        basePizza = _basePizza;
    }

    int cost() {
        cout << "Adding the cost for Jalapenos!\n";
        return basePizza->cost() + 15;
    }

};

#endif