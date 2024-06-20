// Implementation file
#include "quadratic.h"
    // Constructor to initialize coefficients
Quadratic::Quadratic(double a_val, double b_val, double c_val) {
        a = a_val;
        b = b_val;
        c = c_val;
    }

    // Method to calculate discriminant
double Quadratic::calculateDiscriminant() {
        return b * b - 4 * a * c;
    }

    // Method to find and print roots
void Quadratic::findRoots() {
        double discriminant = calculateDiscriminant();

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different:" << endl;
            cout << "Root 1: " << root1 << endl;
            cout << "Root 2: " << root2 << endl;
        } else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "Roots are real and same:" << endl;
            cout << "Root: " << root << endl;
        } else {
            cout << "Roots are complex (not real)." << endl;
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }