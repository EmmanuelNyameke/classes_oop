// Implementation file
#include "triangle.h"

Triangle::Triangle(double a, double b, double c):firstSide(a), secondSide(b), thirdSide(c){
   assert((a + b > c) && (a + c > b) && (b + c  > a) && "The sum of any two sides must be greater than the third side");
}
Triangle::~Triangle(){}

int Triangle :: getFirstSide() const {
    return firstSide;
}
int Triangle :: getSecondSide() const {
    return secondSide;
}
int Triangle :: getThirdSide() const {
    return thirdSide;
}
int Triangle :: getPerimeter() const {
    return firstSide + secondSide + thirdSide;
}
int Triangle :: getArea() const {
    double p = getPerimeter() / 2.0;
    return sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide));
}

void Triangle::getSides() const {
    cout << "Sides: " << firstSide << ", " << secondSide << ", " << thirdSide << endl; 
}