#include "iostream"

#include "./cars/Car.h"
#include "./abstractfactory/AbstractFactory.h"

using namespace std;

int main() {

    AbstractFactory* abstractFactory = new AbstractFactory();
    Factory* factory = abstractFactory->getInstance("ECF");
    Car* car = factory->getCar("EC1");
    car->printSpeed();

    return 0;
}
