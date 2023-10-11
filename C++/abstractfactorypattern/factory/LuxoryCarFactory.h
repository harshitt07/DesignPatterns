#include "string"

#include "./../factory/Factory.h"
#include "./../cars/LuxoryCar1.h"
#include "./../cars/LuxoryCar2.h"

using namespace std;

#ifndef LUXORY_CAR_FACTORY_H
#define LUXORY_CAR_FACTORY_H

class LuxoryCarFactory : public Factory {
    public:
    Car* getCar(string carType) {
        if(carType  == "LC1") {
            return new LuxoryCar1();
        } else if(carType == "LC2") {
            return new LuxoryCar2();
        } else {
            return nullptr;
        }
    } 
};

#endif