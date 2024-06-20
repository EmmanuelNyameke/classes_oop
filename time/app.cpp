// The application file app.cpp to use the time class
#include "time.h"

int main(){
    // Instantiation of a time object
    Time time(4, 5, 27);
    // Printing the original time
    cout << "Original Time: ";
    time.print();
    // Adding 143500 seconds to the original time
    for(int i = 0; i < 143500; i++){
        time.tick();
    }
    // Printing the time after 143500 ticks
    cout << "Time after 143500 ticks";
    time.print();
    return 0;
}