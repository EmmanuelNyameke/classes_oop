// Application file

#include "triangle.h"

int main(){
    Triangle tri(3, 4, 5);
    tri.getSides();
    cout << "Perimeter: " << tri.getPerimeter() << "cm" << endl;
    cout << "Area: " << tri.getArea() << "cm2" << endl;
    return 0;
}