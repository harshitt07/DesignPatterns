
#include "./Vehicle.h"
#include "./../driverstrategy/SportsDriveStrategy.h"

#ifndef SPORTS_VEHICLE_H
#define SPORTS_VEHICLE_H

class SportsVehicle : public Vehicle {

    public:
    SportsVehicle() : Vehicle(new SportsDriveStrategy()) {
    }
    
};

#endif