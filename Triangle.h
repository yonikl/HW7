//
// Created by Yoni on 15/05/2022.
//

#ifndef HW7_TRIANGLE_H
#define HW7_TRIANGLE_H
#include "Shape.h"

class Triangle : Shape{
    Triangle();
    bool isSpecial() const;
    void printSpecial() const override;
    double area() const override;
};


#endif //HW7_TRIANGLE_H
