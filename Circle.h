//
// Created by yehud on 15/05/2022.
//

#ifndef HW7_CIRCLE_H
#define HW7_CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : public Shape{
    float radius;
public:
    explicit Circle(float);
    //Circle(Circle&);חסר בנאי העתקה

    bool isSpecial() const;
    void printSpecial() const;
    double area() const;
};


#endif //HW7_CIRCLE_H
