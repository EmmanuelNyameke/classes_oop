// Implementation file
#include "two.h"
// Constructor
Two::Two():x(0), a('\0'){}
// Accessor member functions
int Two::getX() const{
    return x;
}
char Two::getA() const{
    return a;
}
// Mutator functions
void Two::setX(int newX){
    x = newX;
}
void Two::setA(char newA){
    a = newA;
}