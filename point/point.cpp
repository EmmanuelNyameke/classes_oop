// Implementation file
#include "point.h"

Point::Point(int x_val, int y_val) : x(x_val), y(y_val){}
void Point::print() const{
    cout << "(" << x << ", " << y <<")" << endl;
}
bool Point::isLeftOf(const Point& other) const{
    return x < other.x;
}
bool Point::isRightOf(const Point& other) const{
    return x > other.x;
}
bool Point::isAbove(const Point& other) const {
    return y > other.y;
}
bool Point::isBelow(const Point& other) const{
    return y < other.y;
}
double Point::distanceTo(const Point& other) const{
    return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}