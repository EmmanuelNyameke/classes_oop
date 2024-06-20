/*
In object-oriented programming, we can create a class that helps to find the 
solution to a mathematical equation. One of the equations we often need to solve 
in algebra is the quadratic equation as shown below:
ax2 + bx + c = 0
The roots of this equation are: 
x1 = −b + sqrt (b2 − 4 * a * c)
x2 = −b − sqrt (b2 − 4 * a * c)
The phrase inside the parentheses is called the discriminant. If the value of the 
discriminant is positive, the equation has two roots. If it is zero, the equation 
has one root. If it is negative, the equation has no roots. Create a class named 
Quadratic that finds the roots of a quadratic equation when the coefficients a, b, 
and c are given.
*/
// Interface file
#ifndef QUADRATIC_H
#define QUADRATIC_H
#include <iostream>
#include <cmath>
using namespace std;

class Quadratic {
    private:
           double a, b, c;
    public:
          Quadratic(double a_val, double b_val, double c_val);

          double calculateDiscriminant();
          void findRoots();
};

#endif