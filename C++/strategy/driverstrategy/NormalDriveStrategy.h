#include "iostream"

#include "DriverStrategy.h"

using namespace std;

#ifndef NORMAL_DRIVE_STRATEGY_H
#define NORMAL_DRIVE_STRATEGY_H

// Concept of Polymorphism

class NormalDriveStrategy : public DriverStrategy {
    void drive() {
        cout << "Inside NormalDriveStrategy!\n";
    }
};

#endif