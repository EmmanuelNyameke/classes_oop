// Application file
#include "employee.h"

int main(){
    // Declaring variables
    string name;
    int age;
    int serviceYear;
    double salary;
    // Taking user input
    cout << "What is your name?\n";
    cin >> name;
    cout << "How old are you?\n";
    cin >> age;
    cout << "How long have you render services for the company(in years)?\n";
    cin >> serviceYear;
    cout << "How much do you earn as salary?\n";
    cin >> salary;
    // Instantiating objects
    Employee employee(name, age, serviceYear, salary);
    // Printing result
    cout << "Name: " << employee.getName() << endl;
    cout << "Age: " << employee.getAge() << endl;
    cout << "Service year: " << employee.getServiceYear() << endl;
    cout << "Salary: " << employee.getSalary() << endl;
    return 0;
}