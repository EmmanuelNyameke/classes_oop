// Implementation file
#include "person.h"
Person::Person(string n, int a):name(n), age(a){}
Person::~Person(){}
string Person::getName() const {
    return name;
}
int Person::getAge() const {
    return age;
}
void Person::setName(string n){
    n = name;
}
void Person::setAge(int a){
    a = age;
}
