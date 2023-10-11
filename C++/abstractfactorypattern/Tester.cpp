#include "iostream"

#include "./cars/Car.h"
#include "./abstractfactory/AbstractFactory.h"

using namespace std;

int main() {
    AbstractFactory* abstractFactory = new AbstractFactory();
    Factory* factory = abstractFactory->getInstance("LCF");
    Car* car = factory->getCar("LC2");
    car->printSpeed();
    return 0;
}
