#include "iostream"

#include "./Shape.h"

using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {
    public:
    void draw() {
        cout << "The shape is Circle!!!\n";
    }
};

#endif