#include "iostream"
#include "string"

#include "./factory/ShapeFactory.h"

using namespace std;

int main() {

    ShapeFactory* shapeFactory = new ShapeFactory();
    Shape* shape = shapeFactory->getShape("CIRCLE");
    shape->draw();

    shape = shapeFactory->getShape("SQUARE");
    shape->draw();

    shape = shapeFactory->getShape("PYRAMID");
    shape->draw();

    return 0;
}