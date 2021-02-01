#include <iostream>
#include "Sally.hpp"
using namespace std;

int main()
{
    Sally sallyObject;
    // *pointer = &address
    Sally *sallyPointer = &sallyObject;
    
    sallyObject.printCrap();
    //member selection operator
    sallyPointer->printCrap();
}