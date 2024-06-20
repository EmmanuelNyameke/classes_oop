// Application file
#include "zeller.h"

int main(){
    // Declaring variables
    int day, month, year;
    // Taking user inputs
    cout << "Enter the day(1-31): ";
    cin >> day;
    cout << "Enter the month(1-12): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    // Instantiating objects
    Zeller zeller(day, month, year); 
    // Calling the function and storing it in a variable
    int weekDay = zeller.calculateDayOfWeek(day, month, year);
    // Using an array to list the days of the week
    string daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    // Displaying the result
    cout << "The day of the week for " << day << "-" << month << "-" << year << " is: " << daysOfWeek[weekDay]; 
    return 0;
}