#include "iostream"

#include "./../driverstrategy/DriverStrategy.h"

using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {

    DriverStrategy* driverStrategy;

    public:
    Vehicle(DriverStrategy* _driverStrategy) {
        driverStrategy = _driverStrategy;
    }

    void drive() {
        driverStrategy->drive();
    }

};

#endif