#include "Mother.hpp"  
#include <iostream>
using namespace std;	
Mother::Mother()
{
	cout << "Mother constructor!" << endl;
}

Mother::~Mother()
{
    cout << "Mother Deconstructor" << endl;
}

void Mother::sayName(){
    cout << "I am a Robert" << endl;
}