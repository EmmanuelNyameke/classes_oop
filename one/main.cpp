#include <iostream>
#include "One.h"
using namespace std;

// Application file

int main(){
    One one;
    cout << "Value of x: " << one.getX() << endl;
    cout << "Value of y: " << one.getY() << endl;
    return 0;
}