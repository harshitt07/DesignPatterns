#include "iostream"

#include "DriverStrategy.h"

using namespace std;

#ifndef XYZ_DRIVE_STRATEGY_H
#define XYZ_DRIVE_STRATEGY_H

class XyzDriveStrategy : public DriverStrategy {
    void drive() {
        cout << "Inside XyzDriveStrategy!\n";
    }
};

#endif