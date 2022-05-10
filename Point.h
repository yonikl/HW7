//
// Created by Yoni on 10/05/2022.
//

#ifndef HW7_POINT_H
#define HW7_POINT_H


#include <istream>

class Point
{
    int x;
    int y;
public:
    Point();//A basic constructor that starts the codes at 0
    Point(int, int);//A builder who starts the values before what he gets

    //Definition and acceptance of X
    void setx(int);
    int getx();

    //Definition and acceptance of Y
    void sety(int);
    int gety();

    float distance(Point);//Calculate distance between two points
    /*לא היה בתרגיל 2*/bool operator==(Point);//An operator that calculates inequality between two points
    friend std::istream &operator>>(std::istream&, Point&);
};


#endif //HW7_POINT_H
