// Application file
#include "person.h"

int main(){
    Person person("K Bola", 18);
    cout << "My name is " << person.getName() << " and I am " << person.getAge() << " Years Old." << endl; 
    return 0;
}