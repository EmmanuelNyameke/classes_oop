// Application File
#include "quadratic.h"

int main() {
    double a_val, b_val, c_val;
    cout << "Enter coefficients (a, b, c): ";
    cin >> a_val >> b_val >> c_val;

    Quadratic equation(a_val, b_val, c_val);
    equation.findRoots();

    return 0;
}
