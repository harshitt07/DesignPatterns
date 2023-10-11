#include "string"

#include "./../cars/Car.h"

using namespace std;

#ifndef FACTORY_H
#define FACTORY_H

class Factory {
    public:
    virtual Car* getCar(string carType) = 0;
};

#endif // FACTORY_H