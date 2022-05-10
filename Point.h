//
// Created by Yoni on 10/05/2022.
//

#ifndef HW7_POINT_H
#define HW7_POINT_H


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
    bool operator==(Point);//An operator that calculates inequality between two points

};


#endif //HW7_POINT_H
