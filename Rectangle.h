//
// Created by Yoni on 15/05/2022.
//

#ifndef HW7_RECTANGLE_H
#define HW7_RECTANGLE_H
#include "Shape.h"

class Rectangle : Shape {
    Rectangle();
    bool isSpecial() const ;
    void printSpecial() const override;
    double area() const override;


};


#endif //HW7_RECTANGLE_H
