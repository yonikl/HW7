//
// Created by Yoni on 15/05/2022.
//

#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle() : Shape(3){}

bool Triangle::isSpecial() const {
    if(points[0].distance(points[1]) == points[1].distance(points[2]) && points[1].distance(points[2]) == points[2].distance(points[0])){
        return true;
    }
    return false;
}

void Triangle::printSpecial() const {
    if(!isSpecial()) return;//if it's not special
    cout << "An equilateral triangle with a side length " << points[0].distance(points[1]) << endl;
}

double Triangle::area() const {
    double s = points[0].distance(points[1]) + points[1].distance(points[2]) + points[2].distance(points[0]);
    s /= 2;
    double area = sqrt(s * (s - points[0].distance(points[1])) * (s - points[1].distance(points[2])) * (s - points[2].distance(points[0])));
    return area;
}
