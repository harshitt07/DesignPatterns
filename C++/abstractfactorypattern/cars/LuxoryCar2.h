#include "iostream"

#include "./Car.h"

using namespace std;

#ifndef LUXORY_CAR2_H
#define LUXORY_CAR2_H

class LuxoryCar2 : public Car {

    public:
    void printSpeed() {
        cout << "Getting speed of LuxoryCar 2" << endl;
    }

};

#endif