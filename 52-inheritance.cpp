#include <iostream>
#include "Mother.hpp" // base class
#include "Daughter.hpp" // derived class
using namespace std;

int main()
{
    Mother mom;
    mom.sayName();

    Daughter tina;
    tina.sayName();
}