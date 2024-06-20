// Application file
#include "two.h"
#include <iostream>
using namespace std;
int main(){
    Two two;
    // Print initial values
    cout << "Initial values:" << endl;
    cout << "x: " << two.getX() << endl;
    cout << "a: " << two.getA() << endl;
    // Set new values
    two.setX(10);
    two.setA('z');
    // Print updated values
    cout << "Updated values:" << endl;
    cout << "x: " << two.getX() << endl;
    cout << "y: " << two.getA() << endl;
    return 0;
}