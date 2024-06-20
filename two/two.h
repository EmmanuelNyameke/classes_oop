/*
Creating a class named Two with one integer data member named x and one 
character data member named a. Define four member functions getX, getA, setX, 
and setA. Define the interface file, the implementation file, and an application 
file that instantiates one object from the class and prints the values of data 
members. Then set the values of data members through the mutator functions 
and print their values again.
*/
// Interface file
#ifndef TWO_H
#define TWO_H
class Two {
    private:
           int x;
           char a;
    public:
          Two();
          // Accessor member functions
          int getX() const;
          char getA() const;
          // Mutator functions
          void setX(int newX);
          void setA(char newA);
};

#endif