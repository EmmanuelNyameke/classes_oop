// Implementation file
#include "address.h"

// Initializing constructor and destructor
Address :: Address(double HNO, string sN, string cN, string stN, double zC ) : houseNo(HNO), streetName(sN), cityName(cN), stateName(stN), zipCode(zC){}
Address :: ~Address(){}

// Initializing accessor member functions
double Address :: getHouseNo(){
    return houseNo;
}

string Address :: getStreetName(){
    return streetName;
}

string Address :: getCityName(){
    return cityName;
}

string Address :: getStateName(){
    return stateName;
}

double Address :: getZipCode(){
    return zipCode;
}
