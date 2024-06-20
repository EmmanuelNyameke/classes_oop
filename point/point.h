/*
A point in planar Cartesian coordinates is normally defined with two integer 
values (x and y). Define a class named Point with two data members. Define a 
print function that returns the coordinates of a Point object. Define functions 
to tell the user if a point is on the left side, right side, above, or below another 
point. Define a function to find the distance between two points as shown 
below:
distance = sqrt ( ( x2 − x1) 2 + (y2 − y1) 2)
*/

// Interface file
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
using namespace std;
class Point {
    private:
           int x;
           int y;
    public:
          // Parameterized constructor
          Point(int x_val = 0, int y_val = 0);
          // Print function
          void print() const;
          // Function to check if the point is on the left side of another point
          bool isLeftOf(const Point& other) const;
          // Function to check if the point is on the right side of another point
          bool isRightOf(const Point& other) const;
          // Function to check if the point is above another point
          bool isAbove(const Point& other) const;
          // Function to check if the point is below another point
          bool isBelow(const Point& other) const;
          // Function to calculate the distance between two points
          double distanceTo(const Point& other) const;
};
#endif