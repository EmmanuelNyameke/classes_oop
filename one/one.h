/*
Create a class named One with two integer data members, x and y, and two 
member functions getX and getY. Define the interface file, the implementation 
file, and an application file that instantiates one object from the class and prints 
the values of x and y. 
*/

// Interface file
#ifndef ONE_H
#define ONE_H

class One {
    private: 
           int x;
           int y;
    public:
          One();
          int getX();
          int getY();
};
#endif