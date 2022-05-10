#include "Shape.h"

Shape::Shape(int numOfPoints) : numOfPoints(numOfPoints) {}

std::ostream &operator<<(std::ostream &os, const Shape &shape) {
    os << "numOfPoints: " << shape.numOfPoints << " points: " << shape.points;
    return os;
}
