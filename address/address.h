/*
Define a class name Address as follows:
a. Data members are houseNo and streetName, cityName, stateName, and 
zipcode.
b. Define a parameter constructor and a destructor.
c. Define an accessor member function to print the address.
*/
// interface file
#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;
class Address {
    private:
    // Data Members
           double houseNo;
           string streetName, cityName, stateName;
           double zipCode;
    public:
    // Parameter constructor and Destructor
          Address(double HNO, string sN, string cN, string stN, double zC );
          ~Address();

          // Accessor member functions
          double getHouseNo();
          string getStreetName();
          string getCityName();
          string getStateName();
          double getZipCode();
          void print() const;
};

#endif