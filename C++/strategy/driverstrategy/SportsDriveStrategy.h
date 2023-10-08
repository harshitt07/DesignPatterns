#include "iostream"

#include "DriverStrategy.h"

using namespace std;

#ifndef SPORTS_DRIVE_STRATEGY_H
#define SPORTS_DRIVE_STRATEGY_H

class SportsDriveStrategy : public DriverStrategy {
    void drive() {
        cout << "Inside SportsDriveStrategy!\n";
    }
};

#endif