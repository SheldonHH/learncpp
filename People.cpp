#include <iostream>
#include "People.hpp"
#include "Birthday.hpp"
using namespace std;

// Use member initialize list	
People::People(string x, Birthday bo)
:name(x), dateOfBirth(bo) // put between parameter and body
{
	
}

void People::PrintInfo(){
    cout << name << " was born on" << endl;
}
	
// People::~People()
// {
	
// }