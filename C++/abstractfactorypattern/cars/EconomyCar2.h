#include "iostream"

#include "./Car.h"

using namespace std;

#ifndef ECONOMY_CAR2_H
#define ECONOMY_CAR2_H

class EconomyCar2 : public Car {

    public:
    void printSpeed() {
        cout << "Getting speed of EconomyCar 2 " << endl;
    }

};

#endif