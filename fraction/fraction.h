/***************************************************************
* The interface file fraction.h defining the class Fraction *
***************************************************************/

#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
    // Data members
    private:
           int numer;
           int denom;
    // Public member functions
    public:
          // Constructors
          Fraction(int num, int den); // Parameter constructor
          Fraction(); // Default constructor
          Fraction(const Fraction& fract); // Copy constructor
          ~Fraction(); // Destructor

          // Accessor functions
          int getNumer() const;
          int getDenom() const;
          void print() const;

          // Mutators
          void setNumer(int num);
          void setDenom(int den);

          // Helping private member functions
          void normalize();
          int gcd(int n, int m);
};
#endif