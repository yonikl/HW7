//
// Created by Yoni on 10/05/2022.
//

#ifndef HW7_SHAPE_H
#define HW7_SHAPE_H

#include <ostream>
#include "Point.h"

class Shape {
protected:
    int numOfPoints;
    Point* points;
public:
    Shape();
    explicit Shape(int numOfPoints);
    Shape(Shape const &);
    Shape(Shape&&);
    virtual ~Shape();

    friend std::ostream &operator<<(std::ostream &os, const Shape &shape);

    virtual double area() const=0;
    virtual bool isSpecial() const=0;
    virtual void printSpecial() const=0;

};

#endif //HW7_SHAPE_H
