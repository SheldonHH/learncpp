#include "Hannah.hpp"
#include <iostream>
using namespace std;

Hannah::Hannah(int num)
:h(num)
{
	 
}
	
void Hannah::printCrap(){
    cout << "h=" << h << endl;
    // this explicit C++ you are working with this object
    // this stores the address of ho
    // this pointer stores the current object
    cout << "this->" << this->h << endl;
    // the explicit memory location of the object
    cout << "(*this).h=" << (*this).h  << endl; 
}
    