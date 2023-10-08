
#include "./Vehicle.h"
#include "./../driverstrategy/NormalDriveStrategy.h"

#ifndef GOOD_VEHICLE_H
#define GOOD_VEHICLE_H

// Concept of Inheritence

class GoodVehicle : public Vehicle {

    public:
    GoodVehicle() : Vehicle(new NormalDriveStrategy()) {
    }
};

#endif