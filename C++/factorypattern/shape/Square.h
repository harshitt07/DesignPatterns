#include "iostream"

#include "./Shape.h"

using namespace std;

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape {
    public:
    void draw() {
        cout << "The shape is Square!!!\n";
    }
};

#endif