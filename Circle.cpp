//
// Created by yehud on 15/05/2022.
//
#include "Circle.h"

Circle::Circle(float rad)
:Shape(1), radius(rad){}

bool Circle::isSpecial() {
    if (points[0].getx() == 0 && points[0].gety() == 0)
        return true;
    else
        return false;
}

void Circle::printSpecial() const{

}



