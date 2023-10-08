#include "iostream"
#include "vector"
#include "string"

#include "./vehicles/GoodVehicle.h"
#include "./vehicles/SportsVehicle.h"
#include "./vehicles/OffRoadVehicle.h"

using namespace std;

int main() {
    vector<Vehicle*> vehicleList;
    vehicleList.push_back(new GoodVehicle());
    vehicleList.push_back(new SportsVehicle());
    vehicleList.push_back(new OffRoadVehicle());

    for(int i = 0; i < vehicleList.size(); i++) {
        Vehicle* vehicle = vehicleList[i];
        vehicle->drive();
    }

    return 0;
}