//
// Created by Yoni on 15/05/2022.
//

#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Rectangle::Rectangle() : Shape(4) {}

bool Rectangle::isSpecial() const {
    return (points[0].distance(points[1]) == points[1].distance(points[2]));
}

void Rectangle::printSpecial() const {
    if(!isSpecial()) return;
    cout << "Square with side length " << points[0].distance(points[1]) << endl;

}

double Rectangle::area() const {
    return points[0].distance(points[1]) * points[1].distance(points[2]);
}
