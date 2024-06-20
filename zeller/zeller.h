/*
We wrote a program in Chapter 4 to find the day of the week for any given date 
using Zeller’s congruence: 
weekday = (day + 26 * (month + 1) / 10 + 
year + year / 4 − year /100 + year /400 ) % 7
To show that any program written in the procedural paradigm can be written in 
the object-oriented paradigm, design a class Zeller with three data members—day, 
month, and year—to find the corresponding week day (Saturday to Sunday).
*/

// Interface file
#ifndef ZELLER_H
#define ZELLER_H
#include <iostream>
using namespace std;

class Zeller {
    private:
           int day, month, year;
    public:
          Zeller(int d, int m, int y);
          ~Zeller();

          int calculateDayOfWeek(int day, int month, int year);
};
#endif
