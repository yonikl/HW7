//
// Created by Yoni on 10/05/2022.
//

#include "Point.h"
#include<iostream>
#include<cmath>

//The labels are in the file .h

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int px, int py){
    x = px;
    y = py;
}

void Point::setx(int px){x = px;}

int Point::getx(){return x;}

void Point::sety(int py){y = py;}

int Point::gety(){return y;}

float Point::distance(Point P){
    return sqrt(pow(x - P.x, 2) + pow(y - P.y, 2));
}

bool Point::operator==(Point a){
    bool flag = false;
    if (x == a.getx() && y == a.gety())
    {
        flag = true;
    }
    return flag;
}

std::istream &operator>>(std::istream &is, Point &point) {
    char ch;
    is >> ch >> point.x >> ch >> point.y >> ch;
    return is;
}
