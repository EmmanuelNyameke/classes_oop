// Application file
#include "point.h"

int main(){
    Point p1(3, 4);
    Point p2(6, 8);
    // Print point
    cout << "Point 1: ";
    p1.print();
    cout << "Point 2: ";
    p2.print();
    // Check Relative Positions
    cout << "Point 1 is left of Point 2: " << boolalpha << p1.isLeftOf(p2) << endl;
    cout << "Point 1 is right of Point 2: " << boolalpha << p1.isRightOf(p2) << endl;
    cout << "Point 1 is above Point 2: " << boolalpha << p1.isAbove(p2) << endl;
    cout << "Point 1 is below of Point 2: " << boolalpha << p1.isBelow(p2) << endl;
    // Calculate distance
    cout << "Distance between Point 1 and Point 2: " << p1.distanceTo(p2) << endl;
    return 0;
}