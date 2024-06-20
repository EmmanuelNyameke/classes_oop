// Implementation file

#include "employee.h"

Employee::Employee(string n, int a, int y, double s):name(n), age(a), serviceYear(y), salary(s){}
Employee::~Employee(){}

string Employee::getName(){
    return name;
}
int Employee::getAge(){
    return age;
}
int Employee::getServiceYear(){
    return serviceYear;
}
double Employee::getSalary(){
    return salary;
}