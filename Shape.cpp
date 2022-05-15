#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape() {
    numOfPoints = 0;
    points = nullptr;
}

Shape::Shape(int num){
    numOfPoints = num;
    points = new Point[numOfPoints];
    cout << "Enter values of "<< numOfPoints << " points:\n";
    for (int i = 0; i < numOfPoints; ++i) {
        cin >> points[i];
    }
}

Shape::Shape(const Shape &a) {
    numOfPoints = a.numOfPoints;
    points = new Point[a.numOfPoints];
    for (int i = 0; i < a.numOfPoints; ++i) {
        points[i] = a.points[i];
    }
}

Shape::Shape(Shape && a) {
    numOfPoints = a.numOfPoints;
    points = a.points;
}

Shape::~Shape() {
    numOfPoints = 0;
    points = nullptr;
}

std::ostream &operator<<(std::ostream &os, const Shape &shape) {
    os << "points: ";
    for (int i = 0; i < shape.numOfPoints; ++i) {
        os << "(" << shape.points[i].getx()
        << "," << shape.points[i].gety() << ")";
    }
    os << endl;
    return os;
}










