// Implementation file
#include "zeller.h"

Zeller::Zeller(int d, int m, int y):day(d), month(m), year(y){}
Zeller::~Zeller(){}

int Zeller::calculateDayOfWeek(int day, int month, int year){
    if(month < 3){
        month += 12;
        year--;
    }
    int calculateWeekDay = (day + 26 * (month + 1) / 10 + year + year / 4 - year /100 + year /400 ) % 7;
    return calculateWeekDay;
}