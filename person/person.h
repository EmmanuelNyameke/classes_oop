/*
Code the interface file, the implementation file, and the application file for a 
class name Person with the following members:
a. Data members are name and age.
b. Accessor member functions are getName and getAge.
c. Mutator member functions are setName and setAge.
d. There is a parameter constructor and a destructor. 
*/

// Interface file
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person{
    private:
    // Data Members
           string name;
           int age;
    public: 
    // Constructors and Destructors
          Person(string n, int a);
          ~Person();
    // Accessor Member Functions
          string getName() const;
          int getAge() const;
    // Mutator member functions
          void setName(string n);
          void setAge(int a);
};
#endif