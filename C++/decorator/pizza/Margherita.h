#include "iostream"

#include "./../basepizza/BasePizza.h"

using namespace std;

#ifndef MARGHERITA_H
#define MARGHERITA_H

class Margherita : public BasePizza {

    public:
    int cost() {
        cout << "Adding the cost for Margherita!\n";
        return 150;
    }

};

#endif