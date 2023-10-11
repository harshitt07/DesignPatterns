#include "iostream"

#include "./Car.h"

using namespace std;

#ifndef ECONOMY_CAR1_H
#define ECONOMY_CAR1_H

class EconomyCar1 : public Car {

    public:
    void printSpeed() {
        cout << "Getting speed of EconomyCar 1" << endl;
    }

};

#endif