//
// Created by yehud on 15/05/2022.
//
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(float rad)
:Shape(1), radius(rad){}

bool Circle::isSpecial() const{
    if (points[0].getx() == 0 && points[0].gety() == 0)
        return true;
    else
        return false;
}

void Circle::printSpecial() const{
    if (isSpecial())
        cout << "A canonical circle with a radius " << radius << endl;
}

double Circle::area() const {
    const float PI = 3.14;
    return PI * radius * radius;
}



