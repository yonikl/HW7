//
// Created by Yoni on 10/05/2022.
//

#ifndef HW7_SHAPE_H
#define HW7_SHAPE_H
#include "Point.h"

class Shape {
    int numOfPoints;
    Point* points[];
public:
    Shape();
    Shape(int numOfPoints);
    Shape(Shape const &);
    Shape(Shape&&);


};


#endif //HW7_SHAPE_H
