#include "string"

#include "./../factory/Factory.h"
#include "./../cars/EconomyCar1.h"
#include "./../cars/EconomyCar2.h"

using namespace std;

#ifndef ECONOMIC_CAR_FACTORY_H
#define ECONOMIC_CAR_FACTORY_H

class EconomicCarFactory : public Factory {
    public:
    Car* getCar(string carType) {
        if(carType  == "EC1") {
            return new EconomyCar1();
        } else if(carType == "EC2") {
            return new EconomyCar2();
        } else {
            return nullptr;
        }
    } 
};

#endif