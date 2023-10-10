#include "iostream"
#include "string"

#include "./../shape/Circle.h"
#include "./../shape/Square.h"
#include "./../shape/Pyramid.h"

using namespace std;

#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

class ShapeFactory {
    public:
    Shape* getShape(string shapeType) {
        if(shapeType == "CIRCLE") return new Circle();
        else if(shapeType == "PYRAMID") return new Pyramid();
        else if(shapeType == "SQUARE") return new Square();
        return nullptr;
    }
};

#endif