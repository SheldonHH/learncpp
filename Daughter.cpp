#include <iostream>
#include "Mother.hpp"
#include "Daughter.hpp"  
using namespace std;

Daughter::Daughter()
{
    cout << "Daughter constructor!" << endl;
}

Daughter::~Daughter()
{
    cout << "Daughter Destructor!" << endl;
}

void Daughter::doSth(){
    publicv=1;
    protectedv = 2;
    // privatev=3;
    // invalid because it access to the private variable

}