/*
Define a class name Employee as follows:
a. Data members are name, age, serviceYear, salary.
b. Define a parameter constructor and a destructor.
c. Accessor member functions are getName, getAge, getServiceYear, and getSalary
*/

// Interface file

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
    private:
           string name;
           int age;
           int serviceYear;
           double salary;
    public:
          Employee(string n, int a, int y, double s);
          ~Employee();

          string getName();
          int getAge();
          int getServiceYear();
          double getSalary();
};

#endif