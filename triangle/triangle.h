/*
Define a class named Triangle as follows:
a. Data members are firstSide, secondSide, and thirdSide.
b. Use a constructor that asserts that the sum of any two sides to be greater than 
the third one.
c. Accessor member functions are getSides,getPerimeter, and getArea. To find 
the perimeter and area of a triangle, use the following.
perimeter = a + b + c
area = sqrt ((p) ∗ (p - a) ∗ (p - b) ∗ (p - c)) // p = perimeter / 2
d. Define a constructor for the class.
*/

// Interface file
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

class Triangle {
    private: 
           double firstSide, secondSide, thirdSide;
    public:
          Triangle(double a, double b, double c);
          ~Triangle();

          int getFirstSide() const;
          int getSecondSide() const;
          int getThirdSide() const;
          int getPerimeter() const;
          int getArea() const;
          void getSides() const;

};
#endif