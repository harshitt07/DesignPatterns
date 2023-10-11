#include "iostream"

#include "./Car.h"

using namespace std;

#ifndef LUXORY_CAR1_H
#define LUXORY_CAR1_H

class LuxoryCar1 : public Car {

    public:
    void printSpeed() {
        cout << "Getting speed of LuxoryCar 1" << endl;
    }

};

#endif