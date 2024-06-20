// Application file
#include "address.h"

int main(){
    // Instantiating Objects
    Address address(53.0, "Otamens", "Kasoa", "Kasland", 14785);
    // Printing result
     cout << "House Number: " << address.getHouseNo() << endl;
     cout << "Street Name: " << address.getStreetName() << endl;
     cout << "City Name: " << address.getCityName() << endl;
     cout << "State Name: " << address.getStateName() << endl;
     cout << "Zip Code: " << address.getZipCode() << endl;
    return 0;
}