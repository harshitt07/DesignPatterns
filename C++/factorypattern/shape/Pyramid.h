#include "iostream"

#include "./Shape.h"

using namespace std;

#ifndef PYRAMID_H
#define PYRAMID_H

class Pyramid : public Shape {
    public:
    void draw() {
        cout << "The shape is Pyramid!!!\n";
    }
};

#endif