#include "./Vehicle.h"
#include "./../driverstrategy/NormalDriveStrategy.h"

#ifndef OFF_ROAD_VEHICLE_H
#define OFF_ROAD_VEHICLE_H

class OffRoadVehicle : public Vehicle {

    public:
    OffRoadVehicle() : Vehicle(new NormalDriveStrategy()) {
    }
};

#endif